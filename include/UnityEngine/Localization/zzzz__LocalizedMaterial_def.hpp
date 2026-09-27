#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedMaterial.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/zzzz__LocalizedAsset_1_def.hpp"
CORDL_MODULE_EXPORT(LocalizedMaterial)
namespace System {
class Object;
}
namespace UnityEngine::Localization {
class LocalizedMaterial_UxmlSerializedData;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Localization {
class LocalizedMaterial;
}
namespace UnityEngine::Localization {
class LocalizedMaterial_UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::LocalizedMaterial*);
MARK_REF_T(::UnityEngine::Localization::LocalizedMaterial_UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedMaterial*, "UnityEngine.Localization", "LocalizedMaterial");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedMaterial_UxmlSerializedData*, "UnityEngine.Localization", "LocalizedMaterial/UxmlSerializedData");
// [UxmlObject]
// Dependencies UnityEngine.Localization.LocalizedAsset`1<TObject>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedMaterial
class CORDL_TYPE LocalizedMaterial : public ::UnityEngine::Localization::LocalizedAsset_1<::UnityW<::UnityEngine::Material>> {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::Localization::LocalizedMaterial_UxmlSerializedData;

static inline ::UnityEngine::Localization::LocalizedMaterial* New_ctor() ;

/// @brief Method .ctor, addr 0xb00ed48, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedMaterial() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedMaterial", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedMaterial(LocalizedMaterial && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedMaterial", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedMaterial(LocalizedMaterial const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25027};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedMaterial) == 0xe0, "Size mismatch!");

} // namespace end def UnityEngine::Localization
// [CompilerGenerated]
// Dependencies UnityEngine.Localization.LocalizedAsset`1::UxmlSerializedData<TObject>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedMaterial/UxmlSerializedData
class CORDL_TYPE LocalizedMaterial_UxmlSerializedData : public ::UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData<::UnityW<::UnityEngine::Material>> {
public:
// Declarations
/// @brief Method CreateInstance, addr 0xb00ed94, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

static inline ::UnityEngine::Localization::LocalizedMaterial_UxmlSerializedData* New_ctor() ;

/// [RegisterUxmlCache]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Register, addr 0xb00ed90, size 0x4, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method .ctor, addr 0xb00ede4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedMaterial_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedMaterial_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedMaterial_UxmlSerializedData(LocalizedMaterial_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedMaterial_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedMaterial_UxmlSerializedData(LocalizedMaterial_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25026};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedMaterial_UxmlSerializedData) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::Localization
