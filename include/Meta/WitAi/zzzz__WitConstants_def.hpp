#pragma once
// IWYU pragma private; include "Meta/WitAi/WitConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WitConstants)
// Forward declare root types
namespace Meta::WitAi {
class WitConstants;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::WitConstants*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::WitConstants*, "Meta.WitAi", "WitConstants");
// Dependencies System.Object
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.WitConstants
class CORDL_TYPE WitConstants : public ::System::Object {
public:
// Declarations
/// @brief Field TTS_PITCH, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TTS_PITCH, put=setStaticF_TTS_PITCH)) ::StringW  TTS_PITCH;

/// @brief Field TTS_SPEED, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TTS_SPEED, put=setStaticF_TTS_SPEED)) ::StringW  TTS_SPEED;

/// @brief Field TTS_STYLE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TTS_STYLE, put=setStaticF_TTS_STYLE)) ::StringW  TTS_STYLE;

/// @brief Field TTS_VOICE, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TTS_VOICE, put=setStaticF_TTS_VOICE)) ::StringW  TTS_VOICE;

/// @brief Method GetUniqueId, addr 0x9e3f474, size 0xec, virtual false, abstract: false, final false
static inline ::StringW GetUniqueId() ;

static inline ::StringW getStaticF_TTS_PITCH() ;

static inline ::StringW getStaticF_TTS_SPEED() ;

static inline ::StringW getStaticF_TTS_STYLE() ;

static inline ::StringW getStaticF_TTS_VOICE() ;

static inline void setStaticF_TTS_PITCH(::StringW  value) ;

static inline void setStaticF_TTS_SPEED(::StringW  value) ;

static inline void setStaticF_TTS_STYLE(::StringW  value) ;

static inline void setStaticF_TTS_VOICE(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitConstants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitConstants(WitConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitConstants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitConstants(WitConstants const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31005};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::WitConstants) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi
