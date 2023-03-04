#include <linux/if.h>
#include <linux/if_tun.h>

#include "network.h"

namespace mara
{

namespace network
{

class MaraTUN : public MaraNetworkSuperObject
{
private:
    int tunFd;
public:
private:
public:
    MaraTUN();
    ~MaraTUN();

    bool Init() override;
    void UnInit() override;
};

}

}