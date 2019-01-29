# mono-5.12.0.311
SRCBRANCH = "2018-02"
SRCREV = "d01276bb36fbcbee7317045fd2a2e8e55104b698"

SRC_URI = "git://github.com/mono/mono.git;branch=${SRCBRANCH}"

#SRC_URI += " file://fix_shm_open_issue.patch "

S = "${WORKDIR}/mono-${PV}"
