/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcRotationalStiffnessMeasure.h"
#include "ifcpp/IFC4/include/IfcRotationalStiffnessSelect.h"

// TYPE IfcRotationalStiffnessSelect = SELECT	(IfcBoolean	,IfcRotationalStiffnessMeasure);
shared_ptr<IfcRotationalStiffnessSelect> IfcRotationalStiffnessSelect::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.size() == 0 ){ return shared_ptr<IfcRotationalStiffnessSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcRotationalStiffnessSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcRotationalStiffnessSelect>();
	}
	shared_ptr<IfcRotationalStiffnessSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
