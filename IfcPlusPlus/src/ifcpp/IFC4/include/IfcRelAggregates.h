/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcRelDecomposes.h"
class IFCPP_EXPORT IfcObjectDefinition;
//ENTITY
class IFCPP_EXPORT IfcRelAggregates : public IfcRelDecomposes
{ 
public:
	IfcRelAggregates();
	IfcRelAggregates( int id );
	~IfcRelAggregates();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 6; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcRelAggregates"; }
	virtual const std::wstring toString() const;


	// IfcRoot -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcGloballyUniqueId>					m_GlobalId;
	//  shared_ptr<IfcOwnerHistory>						m_OwnerHistory;				//optional
	//  shared_ptr<IfcLabel>							m_Name;						//optional
	//  shared_ptr<IfcText>								m_Description;				//optional

	// IfcRelationship -----------------------------------------------------------

	// IfcRelDecomposes -----------------------------------------------------------

	// IfcRelAggregates -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcObjectDefinition>					m_RelatingObject;
	std::vector<shared_ptr<IfcObjectDefinition> >	m_RelatedObjects;
};

