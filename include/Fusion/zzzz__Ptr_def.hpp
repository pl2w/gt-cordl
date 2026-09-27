#pragma once
// IWYU pragma private; include "Fusion/Ptr.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Ptr)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
class Ptr_EqualityComparer;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
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
class Ptr_EqualityComparer;
}
namespace Fusion {
struct Ptr;
}
// Write type traits
MARK_REF_T(::Fusion::Ptr_EqualityComparer*);
MARK_VAL_T(::Fusion::Ptr);
DEFINE_IL2CPP_CLASS(::Fusion::Ptr_EqualityComparer*, "Fusion", "Ptr/EqualityComparer");
DEFINE_IL2CPP_CLASS(::Fusion::Ptr, "Fusion", "Ptr");
// [NetworkStructWeaved(1)]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.Ptr
struct CORDL_TYPE Ptr {
public:
// Declarations
using EqualityComparer = ::Fusion::Ptr_EqualityComparer;

/// @brief Field Address, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Address, put=__cordl_internal_set_Address)) int32_t  Address;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::Ptr>"
constexpr operator  ::System::IEquatable_1<::Fusion::Ptr>*() ;

/// @brief Method Equals, addr 0x5f6fe24, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5f6fe14, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Fusion::Ptr  other) ;

/// @brief Method GetHashCode, addr 0x5f6fe9c, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x5f6fea4, size 0x78, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_Address() const;

constexpr int32_t& __cordl_internal_get_Address() ;

constexpr void __cordl_internal_set_Address(int32_t  value) ;

/// @brief Method get_Null, addr 0x5f6fe0c, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::Ptr get_Null() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::Ptr>"
constexpr ::System::IEquatable_1<::Fusion::Ptr>* i___System__IEquatable_1___Fusion__Ptr_() ;

/// @brief Method op_Addition, addr 0x5f6ff28, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::Ptr op_Addition(::Fusion::Ptr  p, int32_t  v) ;

/// @brief Method op_Equality, addr 0x5f6daac, size 0xc, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::Ptr  a, ::Fusion::Ptr  b) ;

/// @brief Method op_Implicit, addr 0x5f6be04, size 0xc, virtual false, abstract: false, final false
static inline bool op_Implicit_bool(::Fusion::Ptr  a) ;

/// @brief Method op_Inequality, addr 0x5f6ff1c, size 0xc, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::Ptr  a, ::Fusion::Ptr  b) ;

/// @brief Method op_Subtraction, addr 0x5f6ff30, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::Ptr op_Subtraction(::Fusion::Ptr  p, int32_t  v) ;

// Ctor Parameters []
// @brief default ctor
constexpr Ptr() ;

// Ctor Parameters [CppParam { name: "Address", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Ptr(int32_t  Address) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Address_padding[0x0];
/// @brief Field Address, offset: 0x0, size: 0x4, def value: None
 int32_t  ___Address;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Address_padding_forAlignment[0x0];
/// @brief Field Address, offset: 0x0, size: 0x4, def value: None
 int32_t  ___Address_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18796};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Ptr) == 0x4, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.Ptr/EqualityComparer
class CORDL_TYPE Ptr_EqualityComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::Ptr>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Ptr>*() noexcept;

/// @brief Method Equals, addr 0x5f6ff38, size 0xc, virtual true, abstract: false, final true
inline bool Equals(::Fusion::Ptr  x, ::Fusion::Ptr  y) ;

/// @brief Method GetHashCode, addr 0x5f6ff44, size 0x8, virtual true, abstract: false, final true
inline int32_t GetHashCode(::Fusion::Ptr  obj) ;

static inline ::Fusion::Ptr_EqualityComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x5f6ff4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::Ptr>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Fusion::Ptr>* i___System__Collections__Generic__IEqualityComparer_1___Fusion__Ptr_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Ptr_EqualityComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Ptr_EqualityComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Ptr_EqualityComparer(Ptr_EqualityComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ptr_EqualityComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ptr_EqualityComparer(Ptr_EqualityComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18795};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Ptr_EqualityComparer) == 0x10, "Size mismatch!");

} // namespace end def Fusion
