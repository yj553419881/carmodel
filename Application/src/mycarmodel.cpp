#include <kanzi/kanzi.hpp>


using namespace kanzi;

class MyCarModel : public ExampleApplication
{
public:

    virtual void onConfigure(ApplicationProperties& configuration) KZ_OVERRIDE
    {
        configuration.binaryName = "MyCarModel.kzb.cfg";
    }

    virtual void onProjectLoaded() KZ_OVERRIDE
    {
        // Project file has been loaded from .kzb file.

        // Add initialization code here.
    }
};

Application* createApplication()
{
    return new MyCarModel;
}
