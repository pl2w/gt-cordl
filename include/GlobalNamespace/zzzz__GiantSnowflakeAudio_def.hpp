#pragma once
// IWYU pragma private; include "GlobalNamespace/GiantSnowflakeAudio.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(GiantSnowflakeAudio)
namespace GlobalNamespace {
struct GiantSnowflakeAudio_SnowflakeScaleOverride;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GiantSnowflakeAudio;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GiantSnowflakeAudio*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GiantSnowflakeAudio*, "", "GiantSnowflakeAudio");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GiantSnowflakeAudio
class CORDL_TYPE GiantSnowflakeAudio : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SnowflakeScaleOverride = ::GlobalNamespace::GiantSnowflakeAudio_SnowflakeScaleOverride;

/// @brief Field audioOverrides, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioOverrides, put=__cordl_internal_set_audioOverrides)) ::System::Collections::Generic::List_1<::GlobalNamespace::GiantSnowflakeAudio_SnowflakeScaleOverride>*  audioOverrides;

static inline ::GlobalNamespace::GiantSnowflakeAudio* New_ctor() ;

/// @brief Method Start, addr 0x58f0f0c, size 0x190, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GiantSnowflakeAudio_SnowflakeScaleOverride>* const& __cordl_internal_get_audioOverrides() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GiantSnowflakeAudio_SnowflakeScaleOverride>*& __cordl_internal_get_audioOverrides() ;

constexpr void __cordl_internal_set_audioOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::GiantSnowflakeAudio_SnowflakeScaleOverride>*  value) ;

/// @brief Method .ctor, addr 0x58f109c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GiantSnowflakeAudio() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GiantSnowflakeAudio", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GiantSnowflakeAudio(GiantSnowflakeAudio && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GiantSnowflakeAudio", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GiantSnowflakeAudio(GiantSnowflakeAudio const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2118};

/// @brief Field audioOverrides, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GiantSnowflakeAudio_SnowflakeScaleOverride>*  ___audioOverrides;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GiantSnowflakeAudio, ___audioOverrides) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GiantSnowflakeAudio) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
