#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneObject)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class SceneObject;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SceneObject*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SceneObject*, "", "SceneObject");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SceneObject
class CORDL_TYPE SceneObject : public ::System::Object {
public:
// Declarations
/// @brief Field classID, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_classID, put=__cordl_internal_set_classID)) int32_t  classID;

/// @brief Field fileID, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_fileID, put=__cordl_internal_set_fileID)) uint64_t  fileID;

/// @brief Field json, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_json, put=__cordl_internal_set_json)) ::StringW  json;

/// @brief Field typeString, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_typeString, put=__cordl_internal_set_typeString)) ::StringW  typeString;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::SceneObject*>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::SceneObject*>*() noexcept;

/// @brief Method Equals, addr 0x5b21af8, size 0x9c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5b21ac0, size 0x38, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::SceneObject*  other) ;

/// @brief Method GetHashCode, addr 0x5b21b94, size 0x94, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetObjectType, addr 0x5b218f8, size 0x100, virtual false, abstract: false, final false
inline ::System::Type* GetObjectType() ;

static inline ::GlobalNamespace::SceneObject* New_ctor(int32_t  classID, uint64_t  fileID) ;

constexpr int32_t const& __cordl_internal_get_classID() const;

constexpr int32_t& __cordl_internal_get_classID() ;

constexpr uint64_t const& __cordl_internal_get_fileID() const;

constexpr uint64_t& __cordl_internal_get_fileID() ;

constexpr ::StringW const& __cordl_internal_get_json() const;

constexpr ::StringW& __cordl_internal_get_json() ;

constexpr ::StringW const& __cordl_internal_get_typeString() const;

constexpr ::StringW& __cordl_internal_get_typeString() ;

constexpr void __cordl_internal_set_classID(int32_t  value) ;

constexpr void __cordl_internal_set_fileID(uint64_t  value) ;

constexpr void __cordl_internal_set_json(::StringW  value) ;

constexpr void __cordl_internal_set_typeString(::StringW  value) ;

/// @brief Method .ctor, addr 0x5b219f8, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(int32_t  classID, uint64_t  fileID) ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::SceneObject*>"
constexpr ::System::IEquatable_1<::GlobalNamespace::SceneObject*>* i___System__IEquatable_1___GlobalNamespace__SceneObject__() noexcept;

/// @brief Method op_Equality, addr 0x5b21c28, size 0x40, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::SceneObject*  x, ::GlobalNamespace::SceneObject*  y) ;

/// @brief Method op_Inequality, addr 0x5b21c68, size 0x40, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::SceneObject*  x, ::GlobalNamespace::SceneObject*  y) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneObject(SceneObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneObject(SceneObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3610};

/// @brief Field classID, offset: 0x10, size: 0x4, def value: None
 int32_t  ___classID;

/// @brief Field fileID, offset: 0x18, size: 0x8, def value: None
 uint64_t  ___fileID;

/// [SerializeField]
/// @brief Field typeString, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___typeString;

/// @brief Field json, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___json;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SceneObject, ___classID) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneObject, ___fileID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneObject, ___typeString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SceneObject, ___json) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SceneObject) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
