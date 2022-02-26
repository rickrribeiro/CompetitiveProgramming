def getContributorsAndProjects(filename):
    file = open(filename,'r')
    lines = file.readlines()

    nContrib,nProjects = map(int, lines[0].split(' '))

    contributors = []
    projects = []

    idxLine = 1
    for i in range(nContrib):
        name, nLanguages = lines[idxLine].split(' ')
        nLanguages = int(nLanguages)
        idxLine+=1
        languages = []
        for i in range(nLanguages):
            languageName, languageLevel = lines[idxLine].split(' ')
            languageLevel = int(languageLevel)
            languages.append({'name': languageName, 'level': languageLevel})
            idxLine+=1
        contributors.append({'name': name, 'languages':languages})
    
    # an integer Di (1 ≤Di ≤ 105) – the number of days it takes to complete the project,
    # an integer Si (1 ≤ Si ≤ 105) – the score awarded for project’s completion,
    # an integer Bi (1 ≤ Bi ≤ 105) – the “best before” day for the project,
    # an integer Ri (1 ≤ Ri ≤ 100) – the number of roles in the project.
    for i in range(nProjects):
        name, nDays,score,dayBefore, nLanguages = lines[idxLine].split(' ')
        nLanguages = int(nLanguages)
        nDays = int(nDays)
        score = int(score)
        dayBefore = int(dayBefore)
        idxLine+=1
        languages = []
        for i in range(nLanguages):
            languageName, languageLevel = lines[idxLine].split(' ')
            languageLevel = int(languageLevel)
            languages.append({'name': languageName, 'level': languageLevel})
            idxLine+=1
        projects.append({'name': name,'nDays':nDays, 'score':score,'dayBefore':dayBefore, 'languages':languages})
    
    return contributors, projects

def generateOutput(filename, projects):
    file = open(filename, 'w')
    file.write(str(len(projects))+"\n")
    print(projects)
    for project in projects:
        file.write(project['name']+"\n")
        names = ''
        for member in project['contributors']:
            names+=f'{member} '
        file.write(names[:-1]+"\n")