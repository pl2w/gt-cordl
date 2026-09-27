#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/zzzz__LocalizedAsset_1_def.hpp"
CORDL_MODULE_EXPORT(LocalizedTexture)
namespace System {
class Object;
}
namespace UnityEngine::Localization {
class LocalizedTexture_UxmlSerializedData;
}
namespace UnityEngine::UIElements {
struct BindingContext;
}
namespace UnityEngine::UIElements {
struct BindingResult;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Localization {
class LocalizedTexture;
}
namespace UnityEngine::Localization {
class LocalizedTexture_UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::LocalizedTexture*);
MARK_REF_T(::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedTexture*, "UnityEngine.Localization", "LocalizedTexture");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData*, "UnityEngine.Localization", "LocalizedTexture/UxmlSerializedData");
// [UxmlObject]
// Dependencies UnityEngine.Localization.LocalizedAsset`1<TObject>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedTexture
class CORDL_TYPE LocalizedTexture : public ::UnityEngine::Localization::LocalizedAsset_1<::UnityW<::UnityEngine::Texture>> {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData;

/// @brief Method ApplyDataBindingValue, addr 0xb00eff4, size 0xbc, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::BindingResult ApplyDataBindingValue(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingContext>  context, ::UnityEngine::Texture*  value) ;

static inline ::UnityEngine::Localization::LocalizedTexture* New_ctor() ;

/// @brief Method .ctor, addr 0xb00f0b0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedTexture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTexture", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedTexture(LocalizedTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTexture", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedTexture(LocalizedTexture const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25033};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedTexture) == 0xe0, "Size mismatch!");

} // namespace end def UnityEngine::Localization
// [CompilerGenerated]
// Dependencies UnityEngine.Localization.LocalizedAsset`1::UxmlSerializedData<TObject>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedTexture/UxmlSerializedData
class CORDL_TYPE LocalizedTexture_UxmlSerializedData : public ::UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData<::UnityW<::UnityEngine::Texture>> {
public:
// Declarations
/// @brief Method CreateInstance, addr 0xb00f0fc, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

static inline ::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData* New_ctor() ;

/// [RegisterUxmlCache]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Register, addr 0xb00f0f8, size 0x4, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method .ctor, addr 0xb00f14c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedTexture_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTexture_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedTexture_UxmlSerializedData(LocalizedTexture_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedTexture_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedTexture_UxmlSerializedData(LocalizedTexture_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25032};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedTexture_UxmlSerializedData) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::Localization
