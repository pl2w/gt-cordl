#pragma once
// IWYU pragma private; include "GlobalNamespace/Drum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Drum)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class Drum;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Drum*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Drum*, "", "Drum");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: Drum
class CORDL_TYPE Drum : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field disabler, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_disabler, put=__cordl_internal_set_disabler)) bool  disabler;

/// @brief Field myIndex, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_myIndex, put=__cordl_internal_set_myIndex)) int32_t  myIndex;

/// @brief Field mySource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_mySource, put=__cordl_internal_set_mySource)) ::UnityW<::UnityEngine::AudioSource>  mySource;

static inline ::GlobalNamespace::Drum* New_ctor() ;

constexpr bool const& __cordl_internal_get_disabler() const;

constexpr bool& __cordl_internal_get_disabler() ;

constexpr int32_t const& __cordl_internal_get_myIndex() const;

constexpr int32_t& __cordl_internal_get_myIndex() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_mySource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_mySource() ;

constexpr void __cordl_internal_set_disabler(bool  value) ;

constexpr void __cordl_internal_set_myIndex(int32_t  value) ;

constexpr void __cordl_internal_set_mySource(::UnityW<::UnityEngine::AudioSource>  value) ;

/// @brief Method .ctor, addr 0x5756b14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Drum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Drum", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Drum(Drum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Drum", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Drum(Drum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1320};

/// @brief Field disabler, offset: 0x20, size: 0x1, def value: None
 bool  ___disabler;

/// @brief Field mySource, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___mySource;

/// @brief Field myIndex, offset: 0x30, size: 0x4, def value: None
 int32_t  ___myIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Drum, ___disabler) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Drum, ___mySource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Drum, ___myIndex) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Drum) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
