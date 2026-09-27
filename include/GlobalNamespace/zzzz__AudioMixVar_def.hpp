#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioMixVar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AudioMixVar)
namespace GlobalNamespace {
class AudioMixVarPool;
}
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
namespace UnityEngine::Audio {
class AudioMixer;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioMixVar;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioMixVar*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioMixVar*, "", "AudioMixVar");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioMixVar
class CORDL_TYPE AudioMixVar : public ::System::Object {
public:
// Declarations
/// @brief Field _pool, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__pool, put=__cordl_internal_set__pool)) ::UnityW<::GlobalNamespace::AudioMixVarPool>  _pool;

/// @brief Field group, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_group, put=__cordl_internal_set_group)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  group;

/// @brief Field mixer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_mixer, put=__cordl_internal_set_mixer)) ::UnityW<::UnityEngine::Audio::AudioMixer>  mixer;

/// @brief Field name, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field taken, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_taken, put=__cordl_internal_set_taken)) bool  taken;

 __declspec(property(get=get_value, put=set_value)) float_t  value;

static inline ::GlobalNamespace::AudioMixVar* New_ctor() ;

/// @brief Method ReturnToPool, addr 0x57a0548, size 0x84, virtual false, abstract: false, final false
inline void ReturnToPool() ;

constexpr ::UnityW<::GlobalNamespace::AudioMixVarPool> const& __cordl_internal_get__pool() const;

constexpr ::UnityW<::GlobalNamespace::AudioMixVarPool>& __cordl_internal_get__pool() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& __cordl_internal_get_group() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& __cordl_internal_get_group() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer> const& __cordl_internal_get_mixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixer>& __cordl_internal_get_mixer() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr bool const& __cordl_internal_get_taken() const;

constexpr bool& __cordl_internal_get_taken() ;

constexpr void __cordl_internal_set__pool(::UnityW<::GlobalNamespace::AudioMixVarPool>  value) ;

constexpr void __cordl_internal_set_group(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value) ;

constexpr void __cordl_internal_set_mixer(::UnityW<::UnityEngine::Audio::AudioMixer>  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_taken(bool  value) ;

/// @brief Method .ctor, addr 0x57a05cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_value, addr 0x57a03e8, size 0xc8, virtual false, abstract: false, final false
inline float_t get_value() ;

/// @brief Method set_value, addr 0x57a04b0, size 0x98, virtual false, abstract: false, final false
inline void set_value(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioMixVar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioMixVar", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioMixVar(AudioMixVar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioMixVar", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioMixVar(AudioMixVar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1529};

/// @brief Field group, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  ___group;

/// @brief Field mixer, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixer>  ___mixer;

/// @brief Field name, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field taken, offset: 0x28, size: 0x1, def value: None
 bool  ___taken;

/// [SerializeField]
/// @brief Field _pool, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AudioMixVarPool>  ____pool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioMixVar, ___group) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMixVar, ___mixer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMixVar, ___name) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMixVar, ___taken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioMixVar, ____pool) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioMixVar) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
