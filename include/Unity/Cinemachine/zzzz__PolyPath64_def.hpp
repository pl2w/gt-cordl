#pragma once
// IWYU pragma private; include "Unity/Cinemachine/PolyPath64.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__PolyPathBase_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PolyPath64)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
struct Point64;
}
namespace Unity::Cinemachine {
class PolyPathBase;
}
// Forward declare root types
namespace Unity::Cinemachine {
class PolyPath64;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::PolyPath64*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::PolyPath64*, "Unity.Cinemachine", "PolyPath64");
// [NullableContext(2)]
// [Nullable(0)]
// [DefaultMember("Child")]
// Dependencies Unity.Cinemachine.PolyPathBase
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.PolyPath64
class CORDL_TYPE PolyPath64 : public ::Unity::Cinemachine::PolyPathBase {
public:
// Declarations
/// @brief [Nullable(1)]
 __declspec(property(get=get_Child)) ::Unity::Cinemachine::PolyPath64*  Child[];

 __declspec(property(get=get_Polygon, put=set_Polygon)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  Polygon;

/// @brief Field <Polygon>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Polygon_k__BackingField, put=__cordl_internal_set__Polygon_k__BackingField)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  _Polygon_k__BackingField;

/// [NullableContext(1)]
/// @brief Method AddChild, addr 0xaefb424, size 0x120, virtual true, abstract: false, final false
inline ::Unity::Cinemachine::PolyPathBase* AddChild(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  p) ;

/// @brief Method Area, addr 0xaefb638, size 0x1d0, virtual false, abstract: false, final false
inline double_t Area() ;

static inline ::Unity::Cinemachine::PolyPath64* New_ctor(::Unity::Cinemachine::PolyPathBase*  parent) ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* const& __cordl_internal_get__Polygon_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*& __cordl_internal_get__Polygon_k__BackingField() ;

constexpr void __cordl_internal_set__Polygon_k__BackingField(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  value) ;

/// @brief Method .ctor, addr 0xaefb420, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::Unity::Cinemachine::PolyPathBase*  parent) ;

/// [NullableContext(1)]
/// @brief Method get_Child, addr 0xaefb544, size 0xf4, virtual false, abstract: false, final false
inline ::Unity::Cinemachine::PolyPath64* get_Child(int32_t  index) ;

/// [CompilerGenerated]
/// @brief Method get_Polygon, addr 0xaefb410, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>* get_Polygon() ;

/// [CompilerGenerated]
/// @brief Method set_Polygon, addr 0xaefb418, size 0x8, virtual false, abstract: false, final false
inline void set_Polygon(::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PolyPath64() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PolyPath64", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PolyPath64(PolyPath64 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolyPath64", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolyPath64(PolyPath64 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22520};

/// [CompilerGenerated]
/// @brief Field <Polygon>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::Point64>*  ____Polygon_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::PolyPath64, ____Polygon_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::PolyPath64) == 0x28, "Size mismatch!");

} // namespace end def Unity::Cinemachine
