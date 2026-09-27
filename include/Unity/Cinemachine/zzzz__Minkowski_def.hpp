#pragma once
// IWYU pragma private; include "Unity/Cinemachine/Minkowski.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Minkowski)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
struct Point64;
}
namespace Unity::Cinemachine {
struct PointD;
}
// Forward declare root types
namespace Unity::Cinemachine {
class Minkowski;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::Minkowski*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::Minkowski*, "Unity.Cinemachine", "Minkowski");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.Minkowski
class CORDL_TYPE Minkowski : public ::System::Object {
public:
// Declarations
/// @brief Method Diff, addr 0xaefc784, size 0x88, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Diff(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  pattern, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, bool  isClosed) ;

/// @brief Method Diff, addr 0xaefc80c, size 0xfc, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Diff(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  pattern, ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path, bool  isClosed, int32_t  decimalPlaces) ;

/// @brief Method MinkowskiInternal, addr 0xaefbca0, size 0x960, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* MinkowskiInternal(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  pattern, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, bool  isSum, bool  isClosed) ;

static inline ::Unity::Cinemachine::Minkowski* New_ctor() ;

/// @brief Method Sum, addr 0xaefc600, size 0x88, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*>* Sum(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  pattern, ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  path, bool  isClosed) ;

/// @brief Method Sum, addr 0xaefc688, size 0xfc, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>* Sum(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  pattern, ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path, bool  isClosed, int32_t  decimalPlaces) ;

/// @brief Method .ctor, addr 0xaefc908, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Minkowski() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Minkowski", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Minkowski(Minkowski && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Minkowski", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Minkowski(Minkowski const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22525};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Cinemachine::Minkowski) == 0x10, "Size mismatch!");

} // namespace end def Unity::Cinemachine
