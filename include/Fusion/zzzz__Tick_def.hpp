#pragma once
// IWYU pragma private; include "Fusion/Tick.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Tick)
namespace Fusion {
class Tick_EqualityComparer;
}
namespace Fusion {
class Tick_RelationalComparer;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
class Tick_EqualityComparer;
}
namespace Fusion {
class Tick_RelationalComparer;
}
namespace Fusion {
struct Tick;
}
// Write type traits
MARK_REF_T(::Fusion::Tick_EqualityComparer*);
MARK_REF_T(::Fusion::Tick_RelationalComparer*);
MARK_VAL_T(::Fusion::Tick);
DEFINE_IL2CPP_CLASS(::Fusion::Tick_EqualityComparer*, "Fusion", "Tick/EqualityComparer");
DEFINE_IL2CPP_CLASS(::Fusion::Tick_RelationalComparer*, "Fusion", "Tick/RelationalComparer");
DEFINE_IL2CPP_CLASS(::Fusion::Tick, "Fusion", "Tick");
// [NetworkStructWeaved(1)]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.Tick
struct CORDL_TYPE Tick {
public:
// Declarations
using EqualityComparer = ::Fusion::Tick_EqualityComparer;

using RelationalComparer = ::Fusion::Tick_RelationalComparer;

/// @brief Field Raw, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Raw, put=__cordl_internal_set_Raw)) int32_t  Raw;

/// @brief Convert operator to "::System::IComparable_1<::Fusion::Tick>"
constexpr operator  ::System::IComparable_1<::Fusion::Tick>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::Tick>"
constexpr operator  ::System::IEquatable_1<::Fusion::Tick>*() ;

/// @brief Method CompareTo, addr 0x5fa497c, size 0x8, virtual true, abstract: false, final true
inline int32_t CompareTo(::Fusion::Tick  other) ;

/// @brief Method Equals, addr 0x5fa4984, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5fa496c, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Fusion::Tick  other) ;

/// @brief Method GetHashCode, addr 0x5fa49fc, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Next, addr 0x5fa4960, size 0xc, virtual false, abstract: false, final false
inline ::Fusion::Tick Next(int32_t  increment) ;

/// @brief Method ToString, addr 0x5fa4a04, size 0x78, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_Raw() const;

constexpr int32_t& __cordl_internal_get_Raw() ;

constexpr void __cordl_internal_set_Raw(int32_t  value) ;

/// @brief Convert to "::System::IComparable_1<::Fusion::Tick>"
constexpr ::System::IComparable_1<::Fusion::Tick>* i___System__IComparable_1___Fusion__Tick_() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::Tick>"
constexpr ::System::IEquatable_1<::Fusion::Tick>* i___System__IEquatable_1___Fusion__Tick_() ;

/// @brief Method op_Equality, addr 0x5fa4aac, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::Tick  a, ::Fusion::Tick  b) ;

/// @brief Method op_GreaterThan, addr 0x5fa4a7c, size 0xc, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::Fusion::Tick  a, ::Fusion::Tick  b) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x5fa4a88, size 0xc, virtual false, abstract: false, final false
static inline bool op_GreaterThanOrEqual(::Fusion::Tick  a, ::Fusion::Tick  b) ;

/// @brief Method op_Implicit, addr 0x5fa4ac4, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::Tick op_Implicit___Fusion__Tick(int32_t  value) ;

/// @brief Method op_Implicit, addr 0x5fa4ad0, size 0xc, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::Fusion::Tick  value) ;

/// @brief Method op_Implicit, addr 0x5fa4acc, size 0x4, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::Fusion::Tick  value) ;

/// @brief Method op_Inequality, addr 0x5fa4ab8, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::Tick  a, ::Fusion::Tick  b) ;

/// @brief Method op_LessThan, addr 0x5fa4a94, size 0xc, virtual false, abstract: false, final false
static inline bool op_LessThan(::Fusion::Tick  a, ::Fusion::Tick  b) ;

/// @brief Method op_LessThanOrEqual, addr 0x5fa4aa0, size 0xc, virtual false, abstract: false, final false
static inline bool op_LessThanOrEqual(::Fusion::Tick  a, ::Fusion::Tick  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr Tick() ;

// Ctor Parameters [CppParam { name: "Raw", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Tick(int32_t  Raw) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Raw_padding[0x0];
/// @brief Field Raw, offset: 0x0, size: 0x4, def value: None
 int32_t  ___Raw;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Raw_padding_forAlignment[0x0];
/// @brief Field Raw, offset: 0x0, size: 0x4, def value: None
 int32_t  ___Raw_forAlignment;
};
};
public:

/// @brief Field ALIGNMENT offset 0xffffffff size 0x4
static constexpr int32_t  ALIGNMENT{static_cast<int32_t>(0x4)};

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19102};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Tick) == 0x4, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Tick/EqualityComparer
class CORDL_TYPE Tick_EqualityComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::Tick>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Tick>*() noexcept;

/// @brief Method Equals, addr 0x5fa4b04, size 0xc, virtual true, abstract: false, final true
inline bool Equals(::Fusion::Tick  x, ::Fusion::Tick  y) ;

/// @brief Method GetHashCode, addr 0x5fa4b10, size 0x8, virtual true, abstract: false, final true
inline int32_t GetHashCode(::Fusion::Tick  obj) ;

static inline ::Fusion::Tick_EqualityComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x5fa4b18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::Tick>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Tick>* i___System__Collections__Generic__IEqualityComparer_1___Fusion__Tick_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Tick_EqualityComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Tick_EqualityComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Tick_EqualityComparer(Tick_EqualityComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tick_EqualityComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tick_EqualityComparer(Tick_EqualityComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19101};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Tick_EqualityComparer) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Tick/RelationalComparer
class CORDL_TYPE Tick_RelationalComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Fusion::Tick>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::Fusion::Tick>*() noexcept;

/// @brief Method Compare, addr 0x5fa4adc, size 0x20, virtual true, abstract: false, final true
inline int32_t Compare(::Fusion::Tick  x, ::Fusion::Tick  y) ;

static inline ::Fusion::Tick_RelationalComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x5fa4afc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::Fusion::Tick>"
constexpr ::System::Collections::Generic::IComparer_1<::Fusion::Tick>* i___System__Collections__Generic__IComparer_1___Fusion__Tick_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Tick_RelationalComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Tick_RelationalComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Tick_RelationalComparer(Tick_RelationalComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Tick_RelationalComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Tick_RelationalComparer(Tick_RelationalComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19100};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Tick_RelationalComparer) == 0x10, "Size mismatch!");

} // namespace end def Fusion
