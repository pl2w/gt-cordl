#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedAudioClip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/zzzz__LocalizedAsset_1_def.hpp"
CORDL_MODULE_EXPORT(LocalizedAudioClip)
namespace System {
class Object;
}
namespace UnityEngine::Localization {
class LocalizedAudioClip_UxmlSerializedData;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace UnityEngine::Localization {
class LocalizedAudioClip;
}
namespace UnityEngine::Localization {
class LocalizedAudioClip_UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::LocalizedAudioClip*);
MARK_REF_T(::UnityEngine::Localization::LocalizedAudioClip_UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedAudioClip*, "UnityEngine.Localization", "LocalizedAudioClip");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedAudioClip_UxmlSerializedData*, "UnityEngine.Localization", "LocalizedAudioClip/UxmlSerializedData");
// [UxmlObject]
// Dependencies UnityEngine.Localization.LocalizedAsset`1<TObject>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedAudioClip
class CORDL_TYPE LocalizedAudioClip : public ::UnityEngine::Localization::LocalizedAsset_1<::UnityW<::UnityEngine::AudioClip>> {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::Localization::LocalizedAudioClip_UxmlSerializedData;

static inline ::UnityEngine::Localization::LocalizedAudioClip* New_ctor() ;

/// @brief Method .ctor, addr 0xb00ea9c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedAudioClip() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAudioClip", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedAudioClip(LocalizedAudioClip && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAudioClip", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedAudioClip(LocalizedAudioClip const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25021};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedAudioClip) == 0xe0, "Size mismatch!");

} // namespace end def UnityEngine::Localization
// [CompilerGenerated]
// Dependencies UnityEngine.Localization.LocalizedAsset`1::UxmlSerializedData<TObject>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedAudioClip/UxmlSerializedData
class CORDL_TYPE LocalizedAudioClip_UxmlSerializedData : public ::UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData<::UnityW<::UnityEngine::AudioClip>> {
public:
// Declarations
/// @brief Method CreateInstance, addr 0xb00eae8, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

static inline ::UnityEngine::Localization::LocalizedAudioClip_UxmlSerializedData* New_ctor() ;

/// [RegisterUxmlCache]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Register, addr 0xb00eae4, size 0x4, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method .ctor, addr 0xb00eb38, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedAudioClip_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAudioClip_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedAudioClip_UxmlSerializedData(LocalizedAudioClip_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAudioClip_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedAudioClip_UxmlSerializedData(LocalizedAudioClip_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25020};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedAudioClip_UxmlSerializedData) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::Localization
