SRCBRANCH = "master"
SRCREV = "${AUTOREV}"

SRC_URI = "git://github.com/mono/mono.git;branch=${SRCBRANCH}"

SRC_URI += " file://fix_shm_open_issue.patch "

S = "${WORKDIR}/mono-${PV}"
