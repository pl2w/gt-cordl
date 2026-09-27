#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ClipperD.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__ClipperBase_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ClipperD)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
struct ClipType;
}
namespace Unity::Cinemachine {
struct FillRule;
}
namespace Unity::Cinemachine {
struct PathType;
}
namespace Unity::Cinemachine {
struct PointD;
}
namespace Unity::Cinemachine {
class PolyTreeD;
}
// Forward declare root types
namespace Unity::Cinemachine {
class ClipperD;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::ClipperD*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::ClipperD*, "Unity.Cinemachine", "ClipperD");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies Unity.Cinemachine.ClipperBase
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.ClipperD
class CORDL_TYPE ClipperD : public ::Unity::Cinemachine::ClipperBase {
public:
// Declarations
/// @brief Field _invScale, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__invScale, put=__cordl_internal_set__invScale)) double_t  _invScale;

/// @brief Field _scale, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__scale, put=__cordl_internal_set__scale)) double_t  _scale;

/// @brief Method AddClip, addr 0xaefa778, size 0xc, virtual false, abstract: false, final false
inline void AddClip(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path) ;

/// @brief Method AddClip, addr 0xaefa79c, size 0xc, virtual false, abstract: false, final false
inline void AddClip(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths) ;

/// @brief Method AddOpenSubject, addr 0xaefa76c, size 0xc, virtual false, abstract: false, final false
inline void AddOpenSubject(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path) ;

/// @brief Method AddOpenSubject, addr 0xaefa790, size 0xc, virtual false, abstract: false, final false
inline void AddOpenSubject(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths) ;

/// @brief Method AddPath, addr 0xaefa628, size 0x9c, virtual false, abstract: false, final false
inline void AddPath(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path, ::Unity::Cinemachine::PathType  polytype, bool  isOpen) ;

/// @brief Method AddPaths, addr 0xaefa6c4, size 0x9c, virtual false, abstract: false, final false
inline void AddPaths(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths, ::Unity::Cinemachine::PathType  polytype, bool  isOpen) ;

/// @brief Method AddSubject, addr 0xaefa760, size 0xc, virtual false, abstract: false, final false
inline void AddSubject(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  path) ;

/// @brief Method AddSubject, addr 0xaefa784, size 0xc, virtual false, abstract: false, final false
inline void AddSubject(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  paths) ;

/// @brief Method Execute, addr 0xaefb09c, size 0x98, virtual false, abstract: false, final false
inline bool Execute(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, ::Unity::Cinemachine::PolyTreeD*  polytree) ;

/// @brief Method Execute, addr 0xaefad30, size 0x36c, virtual false, abstract: false, final false
inline bool Execute(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, ::Unity::Cinemachine::PolyTreeD*  polytree, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  openPaths) ;

/// @brief Method Execute, addr 0xaefac98, size 0x98, virtual false, abstract: false, final false
inline bool Execute(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  solutionClosed) ;

/// @brief Method Execute, addr 0xaefa7a8, size 0x4f0, virtual false, abstract: false, final false
inline bool Execute(::Unity::Cinemachine::ClipType  clipType, ::Unity::Cinemachine::FillRule  fillRule, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  solutionClosed, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*>*  solutionOpen) ;

static inline ::Unity::Cinemachine::ClipperD* New_ctor(int32_t  roundingDecimalPrecision) ;

constexpr double_t const& __cordl_internal_get__invScale() const;

constexpr double_t& __cordl_internal_get__invScale() ;

constexpr double_t const& __cordl_internal_get__scale() const;

constexpr double_t& __cordl_internal_get__scale() ;

constexpr void __cordl_internal_set__invScale(double_t  value) ;

constexpr void __cordl_internal_set__scale(double_t  value) ;

/// @brief Method .ctor, addr 0xaefa4f4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor(int32_t  roundingDecimalPrecision) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClipperD() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClipperD", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ClipperD(ClipperD && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClipperD", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClipperD(ClipperD const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22517};

/// @brief Field _scale, offset: 0x78, size: 0x8, def value: None
 double_t  ____scale;

/// @brief Field _invScale, offset: 0x80, size: 0x8, def value: None
 double_t  ____invScale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::ClipperD, ____scale) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::ClipperD, ____invScale) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::ClipperD) == 0x88, "Size mismatch!");

} // namespace end def Unity::Cinemachine
