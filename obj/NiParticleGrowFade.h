/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIPARTICLEGROWFADE_H_
#define _NIPARTICLEGROWFADE_H_

#include "xml_extract.h"
#include NI_PARTICLE_GROW_FADE_INCLUDE

/*
 * NiParticleGrowFade
 */

class NiParticleGrowFade;
typedef Ref<NiParticleGrowFade> NiParticleGrowFadeRef;

class NiParticleGrowFade : public NI_PARTICLE_GROW_FADE_PARENT {
public:
	NiParticleGrowFade();
	~NiParticleGrowFade();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> link_stack, unsigned int version );
private:
	NI_PARTICLE_GROW_FADE_MEMBERS
};
#endif