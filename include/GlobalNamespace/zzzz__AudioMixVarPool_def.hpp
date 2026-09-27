#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioMixVarPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AudioMixVar_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(AudioMixVarPool)
namespace GlobalNamespace {
class AudioMixVar;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioMixVarPool;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioMixVarPool*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioMixVarPool*, "", "AudioMixVarPool");
// [CreateAssetMenu(fileName = "New AudioMixVarPool", menuName = "ScriptableObjects/AudioMixVarPool", order = 0)]
// Dependencies AudioMixVar, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioMixVarPool
class CORDL_TYPE AudioMixVarPool : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field _vars, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__vars, put=__cordl_internal_set__vars)) ::ArrayW<::GlobalNamespace::AudioMixVar*>  _vars;

static inline ::GlobalNamespace::AudioMixVarPool* New_ctor() ;

/// @brief Method Rent, addr 0x57a023c, size 0x98, virtual false, abstract: false, final false
inline bool Rent(::by_ref<::GlobalNamespace::AudioMixVar*>  mixVar) ;

/// @brief Method Return, addr 0x57a02d4, size 0xb0, virtual false, abstract: false, final false
inline void Return(::GlobalNamespace::AudioMixVar*  mixVar) ;

constexpr ::ArrayW<::GlobalNamespace::AudioMixVar*> const& __cordl_internal_get__vars() const;

constexpr ::ArrayW<::GlobalNamespace::AudioMixVar*>& __cordl_internal_get__vars() ;

constexpr void __cordl_internal_set__vars(::ArrayW<::GlobalNamespace::AudioMixVar*>  value) ;

/// @brief Method .ctor, addr 0x57a0384, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioMixVarPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioMixVarPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioMixVarPool(AudioMixVarPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioMixVarPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioMixVarPool(AudioMixVarPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1528};

/// [SerializeField]
/// @brief Field _vars, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::AudioMixVar*>  ____vars;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioMixVarPool, ____vars) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioMixVarPool) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
