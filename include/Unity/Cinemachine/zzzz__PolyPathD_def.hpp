#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PolyPathD.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__PolyPathBase_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PolyPathD)
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
namespace Unity::Cinemachine {
class PolyPathBase;
}
// Forward declare root types
namespace Unity::Cinemachine {
class PolyPathD;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::PolyPathD*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::PolyPathD*, "Unity.Cinemachine", "PolyPathD");
// [NullableContext(2)]
// [Nullable(0)]
// [DefaultMember("Child")]
// Dependencies Unity.Cinemachine.PolyPathBase
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.PolyPathD
class CORDL_TYPE PolyPathD : public ::Unity::Cinemachine::PolyPathBase {
public:
// Declarations
/// @brief [Nullable(1)]
 __declspec(property(get=get_Child)) ::Unity::Cinemachine::PolyPathD*  Child[];

 __declspec(property(get=get_Polygon, put=set_Polygon)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  Polygon;

 __declspec(property(get=get_Scale, put=set_Scale)) double_t  Scale;

/// @brief Field <Polygon>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Polygon_k__BackingField, put=__cordl_internal_set__Polygon_k__BackingField)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  _Polygon_k__BackingField;

/// @brief Field <Scale>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Scale_k__BackingField, put=__cordl_internal_set__Scale_k__BackingField)) double_t  _Scale_k__BackingField;

/// [NullableContext(1)]
/// @brief Method AddChild, addr 0xaefb82c, size 0x198, virtual true, abstract: false, final false
inline ::Unity::Cinemachine::PolyPathBase* AddChild(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  p) ;

/// @brief Method Area, addr 0xaefbab8, size 0x1d0, virtual false, abstract: false, final false
inline double_t Area() ;

static inline ::Unity::Cinemachine::PolyPathD* New_ctor(::Unity::Cinemachine::PolyPathBase*  parent) ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* const& __cordl_internal_get__Polygon_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*& __cordl_internal_get__Polygon_k__BackingField() ;

constexpr double_t const& __cordl_internal_get__Scale_k__BackingField() const;

constexpr double_t& __cordl_internal_get__Scale_k__BackingField() ;

constexpr void __cordl_internal_set__Polygon_k__BackingField(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  value) ;

constexpr void __cordl_internal_set__Scale_k__BackingField(double_t  value) ;

/// @brief Method .ctor, addr 0xaefb828, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::PolyPathBase*  parent) ;

/// [NullableContext(1)]
/// @brief Method get_Child, addr 0xaefb9c4, size 0xf4, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::PolyPathD* get_Child(int32_t  index) ;

/// [CompilerGenerated]
/// @brief Method get_Polygon, addr 0xaefb818, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>* get_Polygon() ;

/// [CompilerGenerated]
/// @brief Method get_Scale, addr 0xaefb808, size 0x8, virtual false, abstract: false, final false
inline double_t get_Scale() ;

/// [CompilerGenerated]
/// @brief Method set_Polygon, addr 0xaefb820, size 0x8, virtual false, abstract: false, final false
inline void set_Polygon(::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Scale, addr 0xaefb810, size 0x8, virtual false, abstract: false, final false
inline void set_Scale(double_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PolyPathD() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PolyPathD", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PolyPathD(PolyPathD && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolyPathD", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolyPathD(PolyPathD const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22521};

/// [CompilerGenerated]
/// @brief Field <Scale>k__BackingField, offset: 0x20, size: 0x8, def value: None
 double_t  ____Scale_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Polygon>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::PointD>*  ____Polygon_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::PolyPathD, ____Scale_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::PolyPathD, ____Polygon_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::PolyPathD) == 0x30, "Size mismatch!");

} // namespace end def Unity::Cinemachine
