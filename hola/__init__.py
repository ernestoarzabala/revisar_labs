import check50
import check50.c

@check50.check()
def exists():
    """hola.c existe"""
    check50.exists("hola.c")

@check50.check(exists)
def compiles():
    """hola.c compila"""
    check50.c.compile("hola.c", lcs50=True)

@check50.check(compiles)
def emma():
    """responds to name Maria"""
    check50.run("./hola").stdin("Maria").stdout("Maria").exit()

@check50.check(compiles)
def rodrigo():
    """responds to name Rodrigo"""
    check50.run("./hello").stdin("Rodrigo").stdout("Rodrigo").exit()
