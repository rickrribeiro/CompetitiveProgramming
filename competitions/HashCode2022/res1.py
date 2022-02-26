def resp1(contributors,projects):
    #name, contributors[]
    projectscontributors = []
    for project in projects:
        names = []
        for language in project['languages']:
            achou = False
            for contributor in contributors:
                if achou is True:
                    break
                for languageContrib in contributor['languages']:
                    if achou is True:
                        break
                    if languageContrib['name'] == language['name']:
                        names.append(contributor['name'])
                        achou = True
        if achou is True:
            projectscontributors.append({'name':project['name'], 'contributors': names})
    return projectscontributors