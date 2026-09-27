#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/zzzz__LocalizedAsset_1_def.hpp"
CORDL_MODULE_EXPORT(LocalizedMesh)
namespace System {
class Object;
}
namespace UnityEngine::Localization {
class LocalizedMesh_UxmlSerializedData;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::Localization {
class LocalizedMesh;
}
namespace UnityEngine::Localization {
class LocalizedMesh_UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::LocalizedMesh*);
MARK_REF_T(::UnityEngine::Localization::LocalizedMesh_UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedMesh*, "UnityEngine.Localization", "LocalizedMesh");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::LocalizedMesh_UxmlSerializedData*, "UnityEngine.Localization", "LocalizedMesh/UxmlSerializedData");
// [UxmlObject]
// Dependencies UnityEngine.Localization.LocalizedAsset`1<TObject>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedMesh
class CORDL_TYPE LocalizedMesh : public ::UnityEngine::Localization::LocalizedAsset_1<::UnityW<::UnityEngine::Mesh>> {
public:
// Declarations
using UxmlSerializedData = ::UnityEngine::Localization::LocalizedMesh_UxmlSerializedData;

static inline ::UnityEngine::Localization::LocalizedMesh* New_ctor() ;

/// @brief Method .ctor, addr 0xb00ec64, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedMesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedMesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedMesh(LocalizedMesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedMesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedMesh(LocalizedMesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25025};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedMesh) == 0xe0, "Size mismatch!");

} // namespace end def UnityEngine::Localization
// [CompilerGenerated]
// Dependencies UnityEngine.Localization.LocalizedAsset`1::UxmlSerializedData<TObject>
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedMesh/UxmlSerializedData
class CORDL_TYPE LocalizedMesh_UxmlSerializedData : public ::UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData<::UnityW<::UnityEngine::Mesh>> {
public:
// Declarations
/// @brief Method CreateInstance, addr 0xb00ecb0, size 0x50, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

static inline ::UnityEngine::Localization::LocalizedMesh_UxmlSerializedData* New_ctor() ;

/// [RegisterUxmlCache]
/// [Conditional("UNITY_EDITOR")]
/// @brief Method Register, addr 0xb00ecac, size 0x4, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method .ctor, addr 0xb00ed00, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedMesh_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedMesh_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedMesh_UxmlSerializedData(LocalizedMesh_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedMesh_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedMesh_UxmlSerializedData(LocalizedMesh_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25024};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::LocalizedMesh_UxmlSerializedData) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::Localization
