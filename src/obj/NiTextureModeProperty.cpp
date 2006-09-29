/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "../../include/obj/NiTextureModeProperty.h"
using namespace Niflib;

//Definition of TYPE constant
const Type NiTextureModeProperty::TYPE("NiTextureModeProperty", &NI_TEXTURE_MODE_PROPERTY_PARENT::TypeConst() );

NiTextureModeProperty::NiTextureModeProperty() NI_TEXTURE_MODE_PROPERTY_CONSTRUCT {}

NiTextureModeProperty::~NiTextureModeProperty() {}

void NiTextureModeProperty::Read( istream& in, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	InternalRead( in, link_stack, version, user_version );
}

void NiTextureModeProperty::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version, unsigned int user_version ) const {
	InternalWrite( out, link_map, version, user_version );
}

string NiTextureModeProperty::asString( bool verbose ) const {
	return InternalAsString( verbose );
}

void NiTextureModeProperty::FixLinks( const map<unsigned,NiObjectRef> & objects, list<uint> & link_stack, unsigned int version, unsigned int user_version ) {
	InternalFixLinks( objects, link_stack, version, user_version );
}

list<NiObjectRef> NiTextureModeProperty::GetRefs() const {
	return InternalGetRefs();
}

const Type & NiTextureModeProperty::GetType() const {
	return TYPE;
};

