#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectNestingKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkObjectNestingKey)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
class NetworkObjectNestingKey_EqualityComparer;
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
class NetworkObjectNestingKey_EqualityComparer;
}
namespace Fusion {
struct NetworkObjectNestingKey;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkObjectNestingKey_EqualityComparer*);
MARK_VAL_T(::Fusion::NetworkObjectNestingKey);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectNestingKey_EqualityComparer*, "Fusion", "NetworkObjectNestingKey/EqualityComparer");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkObjectNestingKey, "Fusion", "NetworkObjectNestingKey");
// [NetworkStructWeaved(1)]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkObjectNestingKey
struct CORDL_TYPE NetworkObjectNestingKey {
public:
// Declarations
using EqualityComparer = ::Fusion::NetworkObjectNestingKey_EqualityComparer;

 __declspec(property(get=get_IsNone)) bool  IsNone;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field Value, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Value, put=__cordl_internal_set_Value)) int32_t  Value;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkObjectNestingKey>"
constexpr operator  ::System::IEquatable_1<::Fusion::NetworkObjectNestingKey>*() ;

/// @brief Method Equals, addr 0x5fcbccc, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5fcbcbc, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkObjectNestingKey  other) ;

/// @brief Method GetHashCode, addr 0x5fcbd44, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x5fcbd4c, size 0x90, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_Value() const;

constexpr int32_t& __cordl_internal_get_Value() ;

constexpr void __cordl_internal_set_Value(int32_t  value) ;

/// @brief Method .ctor, addr 0x5fcbcb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  value) ;

/// @brief Method get_IsNone, addr 0x5fcbc94, size 0x10, virtual false, abstract: false, final false
inline bool get_IsNone() ;

/// @brief Method get_IsValid, addr 0x5fcbca4, size 0x10, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkObjectNestingKey>"
constexpr ::System::IEquatable_1<::Fusion::NetworkObjectNestingKey>* i___System__IEquatable_1___Fusion__NetworkObjectNestingKey_() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectNestingKey() ;

// Ctor Parameters [CppParam { name: "Value", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkObjectNestingKey(int32_t  Value) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Value_padding[0x0];
/// @brief Field Value, offset: 0x0, size: 0x4, def value: None
 int32_t  ___Value;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Value_padding_forAlignment[0x0];
/// @brief Field Value, offset: 0x0, size: 0x4, def value: None
 int32_t  ___Value_forAlignment;
};
};
public:

/// @brief Field ALIGNMENT offset 0xffffffff size 0x4
static constexpr int32_t  ALIGNMENT{static_cast<int32_t>(0x4)};

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19155};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkObjectNestingKey) == 0x4, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkObjectNestingKey/EqualityComparer
class CORDL_TYPE NetworkObjectNestingKey_EqualityComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectNestingKey>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectNestingKey>*() noexcept;

/// @brief Method Equals, addr 0x5fcbddc, size 0xc, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkObjectNestingKey  x, ::Fusion::NetworkObjectNestingKey  y) ;

/// @brief Method GetHashCode, addr 0x5fcbde8, size 0x8, virtual true, abstract: false, final true
inline int32_t GetHashCode(::Fusion::NetworkObjectNestingKey  obj) ;

static inline ::Fusion::NetworkObjectNestingKey_EqualityComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x5fcbdf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectNestingKey>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectNestingKey>* i___System__Collections__Generic__IEqualityComparer_1___Fusion__NetworkObjectNestingKey_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkObjectNestingKey_EqualityComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectNestingKey_EqualityComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkObjectNestingKey_EqualityComparer(NetworkObjectNestingKey_EqualityComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkObjectNestingKey_EqualityComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkObjectNestingKey_EqualityComparer(NetworkObjectNestingKey_EqualityComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19154};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkObjectNestingKey_EqualityComparer) == 0x10, "Size mismatch!");

} // namespace end def Fusion
