from query import getContributorsAndProjects, generateOutput
from res1 import resp1

contributors, projects = getContributorsAndProjects('./input_data/a.txt')
contributorsProjects = resp1(contributors, projects)
generateOutput('./outputs/a.txt',contributorsProjects)

contributors, projects = getContributorsAndProjects('./input_data/b.txt')
contributorsProjects = resp1(contributors, projects)
generateOutput('./outputs/b.txt',contributorsProjects)

contributors, projects = getContributorsAndProjects('./input_data/c.txt')
contributorsProjects = resp1(contributors, projects)
generateOutput('./outputs/c.txt',contributorsProjects)

contributors, projects = getContributorsAndProjects('./input_data/d.txt')
contributorsProjects = resp1(contributors, projects)
generateOutput('./outputs/d.txt',contributorsProjects)

contributors, projects = getContributorsAndProjects('./input_data/e.txt')
contributorsProjects = resp1(contributors, projects)
generateOutput('./outputs/e.txt',contributorsProjects)

contributors, projects = getContributorsAndProjects('./input_data/f.txt')
contributorsProjects = resp1(contributors, projects)
generateOutput('./outputs/f.txt',contributorsProjects)