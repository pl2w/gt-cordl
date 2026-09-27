#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/Spectrum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Spectrum)
namespace GlobalNamespace {
struct Spectrum_Point;
}
namespace Meta::XR::Acoustics {
class Spectrum___c;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Meta::XR::Acoustics {
class Spectrum;
}
namespace Meta::XR::Acoustics {
class Spectrum___c;
}
// Write type traits
MARK_REF_T(::Meta::XR::Acoustics::Spectrum*);
MARK_REF_T(::Meta::XR::Acoustics::Spectrum___c*);
DEFINE_IL2CPP_CLASS(::Meta::XR::Acoustics::Spectrum*, "Meta.XR.Acoustics", "Spectrum");
DEFINE_IL2CPP_CLASS(::Meta::XR::Acoustics::Spectrum___c*, "Meta.XR.Acoustics", "Spectrum/<>c");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace Meta::XR::Acoustics {
// Is value type: false
// CS Name: Meta.XR.Acoustics.Spectrum
class CORDL_TYPE Spectrum : public ::System::Object {
public:
// Declarations
using Point = ::GlobalNamespace::Spectrum_Point;

using __c = ::Meta::XR::Acoustics::Spectrum___c;

 __declspec(property(get=get_Item)) float_t  Item[];

/// @brief Field points, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_points, put=__cordl_internal_set_points)) ::System::Collections::Generic::List_1<::GlobalNamespace::Spectrum_Point>*  points;

/// @brief Field selection, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_selection, put=__cordl_internal_set_selection)) int32_t  selection;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Spectrum_Point>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Spectrum_Point>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x9ebee5c, size 0xb8, virtual false, abstract: false, final false
inline void Add(float_t  frequency, float_t  data) ;

/// @brief Method Clone, addr 0x9ebea94, size 0xa4, virtual false, abstract: false, final false
inline void Clone(::Meta::XR::Acoustics::Spectrum*  other) ;

static inline ::Meta::XR::Acoustics::Spectrum* New_ctor(::Meta::XR::Acoustics::Spectrum*  other) ;

/// @brief Method Sort, addr 0x9ebef1c, size 0xd0, virtual false, abstract: false, final false
inline void Sort() ;

/// @brief Method System.Collections.Generic.IEnumerable<Meta.XR.Acoustics.Spectrum.Point>.GetEnumerator, addr 0x9ebed3c, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::Spectrum_Point>* System_Collections_Generic_IEnumerable_Meta_XR_Acoustics_Spectrum_Point__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x9ebedcc, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToString, addr 0x9ebefec, size 0x1e4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Spectrum_Point>* const& __cordl_internal_get_points() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Spectrum_Point>*& __cordl_internal_get_points() ;

constexpr int32_t const& __cordl_internal_get_selection() const;

constexpr int32_t& __cordl_internal_get_selection() ;

constexpr void __cordl_internal_set_points(::System::Collections::Generic::List_1<::GlobalNamespace::Spectrum_Point>*  value) ;

constexpr void __cordl_internal_set_selection(int32_t  value) ;

/// @brief Method .ctor, addr 0x9ebec88, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::Meta::XR::Acoustics::Spectrum*  other) ;

/// @brief Method get_Item, addr 0x9ebf1d0, size 0x3c0, virtual false, abstract: false, final false
inline float_t get_Item(float_t  f) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Spectrum_Point>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::Spectrum_Point>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__Spectrum_Point_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Spectrum() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Spectrum", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Spectrum(Spectrum && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Spectrum", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Spectrum(Spectrum const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29967};

/// [SerializeField]
/// @brief Field selection, offset: 0x10, size: 0x4, def value: None
 int32_t  ___selection;

/// [SerializeField]
/// @brief Field points, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::Spectrum_Point>*  ___points;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::Acoustics::Spectrum, ___selection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::Acoustics::Spectrum, ___points) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::Acoustics::Spectrum) == 0x20, "Size mismatch!");

} // namespace end def Meta::XR::Acoustics
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::XR::Acoustics {
// Is value type: false
// CS Name: Meta.XR.Acoustics.Spectrum/<>c
class CORDL_TYPE Spectrum___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Meta::XR::Acoustics::Spectrum___c*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Func_2<::GlobalNamespace::Spectrum_Point,float_t>*  __9__11_0;

/// @brief Field <>9__11_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_1, put=setStaticF___9__11_1)) ::System::Func_2<::GlobalNamespace::Spectrum_Point,float_t>*  __9__11_1;

static inline ::Meta::XR::Acoustics::Spectrum___c* New_ctor() ;

/// @brief Method .ctor, addr 0x9ebf69c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_Item>b__11_0, addr 0x9ebf6a4, size 0x4, virtual false, abstract: false, final false
inline float_t _get_Item_b__11_0(::GlobalNamespace::Spectrum_Point  p) ;

/// @brief Method <get_Item>b__11_1, addr 0x9ebf6a8, size 0x4, virtual false, abstract: false, final false
inline float_t _get_Item_b__11_1(::GlobalNamespace::Spectrum_Point  p) ;

static inline ::Meta::XR::Acoustics::Spectrum___c* getStaticF___9() ;

static inline ::System::Func_2<::GlobalNamespace::Spectrum_Point,float_t>* getStaticF___9__11_0() ;

static inline ::System::Func_2<::GlobalNamespace::Spectrum_Point,float_t>* getStaticF___9__11_1() ;

static inline void setStaticF___9(::Meta::XR::Acoustics::Spectrum___c*  value) ;

static inline void setStaticF___9__11_0(::System::Func_2<::GlobalNamespace::Spectrum_Point,float_t>*  value) ;

static inline void setStaticF___9__11_1(::System::Func_2<::GlobalNamespace::Spectrum_Point,float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Spectrum___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Spectrum___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Spectrum___c(Spectrum___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Spectrum___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Spectrum___c(Spectrum___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29966};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::Acoustics::Spectrum___c) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::Acoustics
