#pragma once
// IWYU pragma private; include "GlobalNamespace/MB3_MeshBakerRoot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB3_MeshBakerRoot)
namespace DigitalOpus::MB::Core {
class MB2_EditorMethodsInterface;
}
namespace DigitalOpus::MB::Core {
struct MB2_ValidationLevel;
}
namespace DigitalOpus::MB::Core {
struct MB_ObjsToCombineTypes;
}
namespace GlobalNamespace {
class MB2_TextureBakeResults;
}
namespace GlobalNamespace {
class MB3_MeshBakerRoot_ZSortObjects;
}
namespace GlobalNamespace {
class ZSortObjects_MB3_MeshBakerRoot_ItemComparer;
}
namespace GlobalNamespace {
class ZSortObjects_MB3_MeshBakerRoot_Item;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MB3_MeshBakerRoot;
}
namespace GlobalNamespace {
class MB3_MeshBakerRoot_ZSortObjects;
}
namespace GlobalNamespace {
class ZSortObjects_MB3_MeshBakerRoot_Item;
}
namespace GlobalNamespace {
class ZSortObjects_MB3_MeshBakerRoot_ItemComparer;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB3_MeshBakerRoot*);
MARK_REF_T(::GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects*);
MARK_REF_T(::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*);
MARK_REF_T(::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_MeshBakerRoot*, "", "MB3_MeshBakerRoot");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects*, "", "MB3_MeshBakerRoot/ZSortObjects");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*, "", "MB3_MeshBakerRoot/ZSortObjects/Item");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer*, "", "MB3_MeshBakerRoot/ZSortObjects/ItemComparer");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_MeshBakerRoot
class CORDL_TYPE MB3_MeshBakerRoot : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ZSortObjects = ::GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects;

/// @brief Field sortAxis, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_sortAxis, put=__cordl_internal_set_sortAxis)) ::UnityEngine::Vector3  sortAxis;

/// @brief [HideInInspector]
 __declspec(property(get=get_textureBakeResults, put=set_textureBakeResults)) ::UnityW<::GlobalNamespace::MB2_TextureBakeResults>  textureBakeResults;

/// @brief Method DoCombinedValidate, addr 0x9d78848, size 0x440, virtual false, abstract: false, final false
static inline bool DoCombinedValidate(::GlobalNamespace::MB3_MeshBakerRoot*  mom, ::DigitalOpus::MB::Core::MB_ObjsToCombineTypes  objToCombineType, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*  editorMethods, ::DigitalOpus::MB::Core::MB2_ValidationLevel  validationLevel) ;

/// @brief Method GetObjectsToCombine, addr 0x9d7883c, size 0x8, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GetObjectsToCombine() ;

static inline ::GlobalNamespace::MB3_MeshBakerRoot* New_ctor() ;

/// @brief Method PurgeNullsFromObjectsToCombine, addr 0x9d78844, size 0x4, virtual true, abstract: false, final false
inline void PurgeNullsFromObjectsToCombine() ;

/// @brief Method ValidateTextureBakerGameObjects, addr 0x9d78c88, size 0x8cc, virtual false, abstract: false, final false
static inline bool ValidateTextureBakerGameObjects(::GlobalNamespace::MB3_MeshBakerRoot*  mom, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  objsToMesh, ::DigitalOpus::MB::Core::MB2_ValidationLevel  validationLevel) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_sortAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_sortAxis() ;

constexpr void __cordl_internal_set_sortAxis(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x9d77d34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_textureBakeResults, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::GlobalNamespace::MB2_TextureBakeResults> get_textureBakeResults() ;

/// @brief Method set_textureBakeResults, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_textureBakeResults(::GlobalNamespace::MB2_TextureBakeResults*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshBakerRoot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerRoot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshBakerRoot(MB3_MeshBakerRoot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerRoot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshBakerRoot(MB3_MeshBakerRoot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22577};

/// @brief Field sortAxis, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___sortAxis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerRoot, ___sortAxis) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_MeshBakerRoot) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_MeshBakerRoot/ZSortObjects
class CORDL_TYPE MB3_MeshBakerRoot_ZSortObjects : public ::System::Object {
public:
// Declarations
using Item = ::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item;

using ItemComparer = ::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer;

/// @brief Field sortAxis, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_sortAxis, put=__cordl_internal_set_sortAxis)) ::UnityEngine::Vector3  sortAxis;

static inline ::GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects* New_ctor() ;

/// @brief Method SortByDistanceAlongAxis, addr 0x9d7968c, size 0x494, virtual false, abstract: false, final false
inline void SortByDistanceAlongAxis(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gos) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_sortAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_sortAxis() ;

constexpr void __cordl_internal_set_sortAxis(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x9d79b30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB3_MeshBakerRoot_ZSortObjects() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerRoot_ZSortObjects", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB3_MeshBakerRoot_ZSortObjects(MB3_MeshBakerRoot_ZSortObjects && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB3_MeshBakerRoot_ZSortObjects", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB3_MeshBakerRoot_ZSortObjects(MB3_MeshBakerRoot_ZSortObjects const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22576};

/// @brief Field sortAxis, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___sortAxis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects, ___sortAxis) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_MeshBakerRoot_ZSortObjects) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_MeshBakerRoot/ZSortObjects/ItemComparer
class CORDL_TYPE ZSortObjects_MB3_MeshBakerRoot_ItemComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*>*() noexcept;

/// @brief Method Compare, addr 0x9d79b38, size 0x38, virtual true, abstract: false, final true
inline int32_t Compare(::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*  a, ::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*  b) ;

static inline ::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x9d79b28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*>"
constexpr ::System::Collections::Generic::IComparer_1<::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item*>* i___System__Collections__Generic__IComparer_1___GlobalNamespace__ZSortObjects_MB3_MeshBakerRoot_Item__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZSortObjects_MB3_MeshBakerRoot_ItemComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZSortObjects_MB3_MeshBakerRoot_ItemComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZSortObjects_MB3_MeshBakerRoot_ItemComparer(ZSortObjects_MB3_MeshBakerRoot_ItemComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZSortObjects_MB3_MeshBakerRoot_ItemComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZSortObjects_MB3_MeshBakerRoot_ItemComparer(ZSortObjects_MB3_MeshBakerRoot_ItemComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22575};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_ItemComparer) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB3_MeshBakerRoot/ZSortObjects/Item
class CORDL_TYPE ZSortObjects_MB3_MeshBakerRoot_Item : public ::System::Object {
public:
// Declarations
/// @brief Field go, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_go, put=__cordl_internal_set_go)) ::UnityW<::UnityEngine::GameObject>  go;

/// @brief Field point, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_point, put=__cordl_internal_set_point)) ::UnityEngine::Vector3  point;

static inline ::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_go() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_go() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_point() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_point() ;

constexpr void __cordl_internal_set_go(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_point(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x9d79b20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZSortObjects_MB3_MeshBakerRoot_Item() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZSortObjects_MB3_MeshBakerRoot_Item", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZSortObjects_MB3_MeshBakerRoot_Item(ZSortObjects_MB3_MeshBakerRoot_Item && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZSortObjects_MB3_MeshBakerRoot_Item", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZSortObjects_MB3_MeshBakerRoot_Item(ZSortObjects_MB3_MeshBakerRoot_Item const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22574};

/// @brief Field go, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___go;

/// @brief Field point, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___point;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item, ___go) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item, ___point) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZSortObjects_MB3_MeshBakerRoot_Item) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
