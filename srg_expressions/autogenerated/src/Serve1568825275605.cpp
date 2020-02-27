#include "Serve1568825275605.h"
/*PROTECTED REGION ID(eph1568825275605) ENABLED START*/
// Add additional options here
/*PROTECTED REGION END*/

using namespace alica;

namespace alicaAutogenerated
{
// Plan:Serve
/* generated comment
    Task: Serve  -> EntryPoint-ID: 1568825285315
*/
shared_ptr<UtilityFunction> UtilityFunction1568825275605::getUtilityFunction(Plan* plan)
{
    /*PROTECTED REGION ID(1568825275605) ENABLED START*/
    std::shared_ptr<UtilityFunction> defaultFunction = std::make_shared<DefaultUtilityFunction>(plan);
    return defaultFunction;
    /*PROTECTED REGION END*/
}
/**
 * Outgoing transition:
 *   - Name: 1568825457853, ConditionString: MovingTask received!, Comment: MISSING_COMMENT
 *
 * Abstractplans in current state:
 *   - Stop (1555602210283)
 *
 * Tasks in plan:
 *   - Serve (1555601344076) (Entrypoint: 1568825285315)
 *
 * States in plan:
 *   - WaitForTask (1568825288640)
 *   - MoveToPosition (1568825309813)
 *   - ManipulateObject (1571661663929)
 *   - TransportToPosition (1573418710533)
 *   - AnswerQuestion (1581966845202)
 *
 * Variables of plan:
 */
bool PreCondition1568825457853::evaluate(shared_ptr<RunningPlan> rp)
{
    /*PROTECTED REGION ID(1568825336792) ENABLED START*/
    return true;
    /*PROTECTED REGION END*/
}
/**
 * Outgoing transition:
 *   - Name: 1571661980674, ConditionString: Manipulate command!, Comment: MISSING_COMMENT
 *
 * Abstractplans in current state:
 *   - Stop (1555602210283)
 *
 * Tasks in plan:
 *   - Serve (1555601344076) (Entrypoint: 1568825285315)
 *
 * States in plan:
 *   - WaitForTask (1568825288640)
 *   - MoveToPosition (1568825309813)
 *   - ManipulateObject (1571661663929)
 *   - TransportToPosition (1573418710533)
 *   - AnswerQuestion (1581966845202)
 *
 * Variables of plan:
 */
bool PreCondition1571661980674::evaluate(shared_ptr<RunningPlan> rp)
{
    /*PROTECTED REGION ID(1571661739802) ENABLED START*/
    return true;
    /*PROTECTED REGION END*/
}
/**
 * Outgoing transition:
 *   - Name: 1573418732991, ConditionString: Received a transport task!, Comment: MISSING_COMMENT
 *
 * Abstractplans in current state:
 *   - Stop (1555602210283)
 *
 * Tasks in plan:
 *   - Serve (1555601344076) (Entrypoint: 1568825285315)
 *
 * States in plan:
 *   - WaitForTask (1568825288640)
 *   - MoveToPosition (1568825309813)
 *   - ManipulateObject (1571661663929)
 *   - TransportToPosition (1573418710533)
 *   - AnswerQuestion (1581966845202)
 *
 * Variables of plan:
 */
bool PreCondition1573418732991::evaluate(shared_ptr<RunningPlan> rp)
{
    /*PROTECTED REGION ID(1573418725423) ENABLED START*/
    return true;
    /*PROTECTED REGION END*/
}
/**
 * Outgoing transition:
 *   - Name: 1581966904893, ConditionString: , Comment: MISSING_COMMENT
 *
 * Abstractplans in current state:
 *   - Stop (1555602210283)
 *
 * Tasks in plan:
 *   - Serve (1555601344076) (Entrypoint: 1568825285315)
 *
 * States in plan:
 *   - WaitForTask (1568825288640)
 *   - MoveToPosition (1568825309813)
 *   - ManipulateObject (1571661663929)
 *   - TransportToPosition (1573418710533)
 *   - AnswerQuestion (1581966845202)
 *
 * Variables of plan:
 */
bool PreCondition1581966904893::evaluate(shared_ptr<RunningPlan> rp)
{
    /*PROTECTED REGION ID(1581966904890) ENABLED START*/
    return true;
    /*PROTECTED REGION END*/
}
/**
 * Outgoing transition:
 *   - Name: 1568825476581, ConditionString: Movement successful!, Comment: MISSING_COMMENT
 *
 * Abstractplans in current state:
 *   - Move (1568825137528)
 *
 * Tasks in plan:
 *   - Serve (1555601344076) (Entrypoint: 1568825285315)
 *
 * States in plan:
 *   - WaitForTask (1568825288640)
 *   - MoveToPosition (1568825309813)
 *   - ManipulateObject (1571661663929)
 *   - TransportToPosition (1573418710533)
 *   - AnswerQuestion (1581966845202)
 *
 * Variables of plan:
 */
bool PreCondition1568825476581::evaluate(shared_ptr<RunningPlan> rp)
{
    /*PROTECTED REGION ID(1568825392354) ENABLED START*/
    return true;
    /*PROTECTED REGION END*/
}
/**
 * Outgoing transition:
 *   - Name: 1571661864299, ConditionString: Manipulation successful!, Comment: MISSING_COMMENT
 *
 * Abstractplans in current state:
 *   - Manipulate (1571687572903)
 *
 * Tasks in plan:
 *   - Serve (1555601344076) (Entrypoint: 1568825285315)
 *
 * States in plan:
 *   - WaitForTask (1568825288640)
 *   - MoveToPosition (1568825309813)
 *   - ManipulateObject (1571661663929)
 *   - TransportToPosition (1573418710533)
 *   - AnswerQuestion (1581966845202)
 *
 * Variables of plan:
 */
bool PreCondition1571661864299::evaluate(shared_ptr<RunningPlan> rp)
{
    /*PROTECTED REGION ID(1571661809581) ENABLED START*/
    return true;
    /*PROTECTED REGION END*/
}
/**
 * Outgoing transition:
 *   - Name: 1573418838905, ConditionString: Any children success, Comment: MISSING_COMMENT
 *
 * Abstractplans in current state:
 *   - Transport (1573418869596)
 *
 * Tasks in plan:
 *   - Serve (1555601344076) (Entrypoint: 1568825285315)
 *
 * States in plan:
 *   - WaitForTask (1568825288640)
 *   - MoveToPosition (1568825309813)
 *   - ManipulateObject (1571661663929)
 *   - TransportToPosition (1573418710533)
 *   - AnswerQuestion (1581966845202)
 *
 * Variables of plan:
 */
bool PreCondition1573418838905::evaluate(shared_ptr<RunningPlan> rp)
{
    /*PROTECTED REGION ID(1573418821209) ENABLED START*/
    return true;
    /*PROTECTED REGION END*/
}
/**
 * Outgoing transition:
 *   - Name: 1581966925394, ConditionString: , Comment: MISSING_COMMENT
 *
 * Abstractplans in current state:
 *   - Answer (1581966891046)
 *
 * Tasks in plan:
 *   - Serve (1555601344076) (Entrypoint: 1568825285315)
 *
 * States in plan:
 *   - WaitForTask (1568825288640)
 *   - MoveToPosition (1568825309813)
 *   - ManipulateObject (1571661663929)
 *   - TransportToPosition (1573418710533)
 *   - AnswerQuestion (1581966845202)
 *
 * Variables of plan:
 */
bool PreCondition1581966925394::evaluate(shared_ptr<RunningPlan> rp)
{
    /*PROTECTED REGION ID(1581966925392) ENABLED START*/
    std::cout << "The PreCondition 1581966925394 in Transition FromAnswerQuestionToWaitForTask is not implement yet!" << std::endl;
    return false;
    /*PROTECTED REGION END*/
}
} // namespace alicaAutogenerated
