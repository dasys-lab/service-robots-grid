#pragma once

#include <memory>
#include <map>

namespace supplementary {
    template<typename>
    class InformationElement;
}

namespace srg
{
class SRGWorldModel;
namespace dialogue
{
class AnswerGraph;
class SpeechAct;
class BasicHumanNeeds;

class DialogueManager
{
public:
    DialogueManager(SRGWorldModel* wm);
    ~DialogueManager();
    void processSpeechAct(std::shared_ptr<supplementary::InformationElement<SpeechAct>> speechAct);
private:
    srg::SRGWorldModel* wm;
    BasicHumanNeeds* basicHumanNeeds;
    std::map <std::shared_ptr<supplementary::InformationElement<SpeechAct>>, AnswerGraph*> actMapping;
};
} // namespace dialogue
} // namespace srg