
#ifndef __AgentStdDev_hxx__
#define __AgentStdDev_hxx__

#include <analysis/Analysis.hxx>

namespace Engine
{
	class AgentRecord;
}

namespace Analysis
{

class AgentStdDev : public AgentAnalysis
{
	std::string _attributeName;
	std::vector<int> _numAgents;
	std::vector< std::vector<int> > _values;
public:
	AgentStdDev( const std::string & attributeName );
	virtual ~AgentStdDev();
	void computeAgent( const Engine::AgentRecord & agentRecord );

	void preProcess();
	void postProcess();
};

} // namespace Analysis

#endif // __AgentStdDev_hxx__
