#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PathGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Cinemachine/zzzz__EndType_def.hpp"
#include "Unity/Cinemachine/zzzz__JoinType_def.hpp"
CORDL_MODULE_EXPORT(PathGroup)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
struct EndType;
}
namespace Unity::Cinemachine {
struct JoinType;
}
namespace Unity::Cinemachine {
struct Point64;
}
// Forward declare root types
namespace Unity::Cinemachine {
class PathGroup;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::PathGroup*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::PathGroup*, "Unity.Cinemachine", "PathGroup");
// Dependencies System.Object, Unity.Cinemachine.EndType, Unity.Cinemachine.JoinType
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.PathGroup
class CORDL_TYPE PathGroup : public ::System::Object {
public:
// Declarations
/// @brief Field _endType, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__endType, put=__cordl_internal_set__endType)) ::Unity::Cinemachine::EndType  _endType;

/// @brief Field _inPaths, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__inPaths, put=__cordl_internal_set__inPaths)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  _inPaths;

/// @brief Field _joinType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__joinType, put=__cordl_internal_set__joinType)) ::Unity::Cinemachine::JoinType  _joinType;

/// @brief Field _outPath, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__outPath, put=__cordl_internal_set__outPath)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  _outPath;

/// @brief Field _outPaths, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__outPaths, put=__cordl_internal_set__outPaths)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  _outPaths;

/// @brief Field _pathsReversed, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__pathsReversed, put=__cordl_internal_set__pathsReversed)) bool  _pathsReversed;

static inline ::Unity::Cinemachine::PathGroup* New_ctor(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, ::Unity::Cinemachine::JoinType  joinType, ::Unity::Cinemachine::EndType  endType) ;

constexpr ::Unity::Cinemachine::EndType const& __cordl_internal_get__endType() const;

constexpr ::Unity::Cinemachine::EndType& __cordl_internal_get__endType() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* const& __cordl_internal_get__inPaths() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*& __cordl_internal_get__inPaths() ;

constexpr ::Unity::Cinemachine::JoinType const& __cordl_internal_get__joinType() const;

constexpr ::Unity::Cinemachine::JoinType& __cordl_internal_get__joinType() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* const& __cordl_internal_get__outPath() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*& __cordl_internal_get__outPath() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* const& __cordl_internal_get__outPaths() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*& __cordl_internal_get__outPaths() ;

constexpr bool const& __cordl_internal_get__pathsReversed() const;

constexpr bool& __cordl_internal_get__pathsReversed() ;

constexpr void __cordl_internal_set__endType(::Unity::Cinemachine::EndType  value) ;

constexpr void __cordl_internal_set__inPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  value) ;

constexpr void __cordl_internal_set__joinType(::Unity::Cinemachine::JoinType  value) ;

constexpr void __cordl_internal_set__outPath(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  value) ;

constexpr void __cordl_internal_set__outPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  value) ;

constexpr void __cordl_internal_set__pathsReversed(bool  value) ;

/// @brief Method .ctor, addr 0xaefc910, size 0x140, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  paths, ::Unity::Cinemachine::JoinType  joinType, ::Unity::Cinemachine::EndType  endType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathGroup(PathGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathGroup(PathGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22528};

/// @brief Field _inPaths, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  ____inPaths;

/// @brief Field _outPath, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  ____outPath;

/// @brief Field _outPaths, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>*  ____outPaths;

/// @brief Field _joinType, offset: 0x28, size: 0x4, def value: None
 ::Unity::Cinemachine::JoinType  ____joinType;

/// @brief Field _endType, offset: 0x2c, size: 0x4, def value: None
 ::Unity::Cinemachine::EndType  ____endType;

/// @brief Field _pathsReversed, offset: 0x30, size: 0x1, def value: None
 bool  ____pathsReversed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::PathGroup, ____inPaths) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::PathGroup, ____outPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::PathGroup, ____outPaths) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::PathGroup, ____joinType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::PathGroup, ____endType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::PathGroup, ____pathsReversed) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::PathGroup) == 0x38, "Size mismatch!");

} // namespace end def Unity::Cinemachine
