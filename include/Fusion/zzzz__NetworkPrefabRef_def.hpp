#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkPrefabRef__RawGuidValue_e__FixedBuffer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkPrefabRef)
namespace Fusion {
class INetworkStruct;
}
namespace Fusion {
struct NetworkObjectGuid;
}
namespace Fusion {
class NetworkPrefabRef_EqualityComparer;
}
namespace GlobalNamespace {
struct NetworkPrefabRef__RawGuidValue_e__FixedBuffer;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System {
struct Guid;
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
class NetworkPrefabRef_EqualityComparer;
}
namespace Fusion {
struct NetworkPrefabRef;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkPrefabRef_EqualityComparer*);
MARK_VAL_T(::Fusion::NetworkPrefabRef);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkPrefabRef_EqualityComparer*, "Fusion", "NetworkPrefabRef/EqualityComparer");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkPrefabRef, "Fusion", "NetworkPrefabRef");
// [NetworkStructWeaved(4)]
// Dependencies Fusion.NetworkPrefabRef::<RawGuidValue>e__FixedBuffer
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkPrefabRef
struct CORDL_TYPE NetworkPrefabRef {
public:
// Declarations
using EqualityComparer = ::Fusion::NetworkPrefabRef_EqualityComparer;

using _RawGuidValue_e__FixedBuffer = ::GlobalNamespace::NetworkPrefabRef__RawGuidValue_e__FixedBuffer;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field RawGuidValue, offset 0x0, size 0x10 
 __declspec(property(get=__cordl_internal_get_RawGuidValue, put=__cordl_internal_set_RawGuidValue)) ::GlobalNamespace::NetworkPrefabRef__RawGuidValue_e__FixedBuffer  RawGuidValue;

/// @brief Field _data0, offset 0x0, size 0x8 
 __declspec(property(get=__cordl_internal_get__data0, put=__cordl_internal_set__data0)) int64_t  _data0;

/// @brief Field _data1, offset 0x8, size 0x8 
 __declspec(property(get=__cordl_internal_get__data1, put=__cordl_internal_set__data1)) int64_t  _data1;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IComparable_1<::Fusion::NetworkPrefabRef>"
constexpr operator  ::System::IComparable_1<::Fusion::NetworkPrefabRef>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkPrefabRef>"
constexpr operator  ::System::IEquatable_1<::Fusion::NetworkPrefabRef>*() ;

/// @brief Method CompareTo, addr 0x5fab190, size 0x30, virtual true, abstract: false, final true
inline int32_t CompareTo(::Fusion::NetworkPrefabRef  other) ;

/// @brief Method Equals, addr 0x5faaf84, size 0x88, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5faaf50, size 0x24, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkPrefabRef  other) ;

/// @brief Method GetHashCode, addr 0x5fab00c, size 0x64, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Parse, addr 0x5faaeec, size 0x54, virtual false, abstract: false, final false
static inline ::Fusion::NetworkPrefabRef Parse(::StringW  str) ;

/// @brief Method ToString, addr 0x5fab070, size 0x64, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x5fab11c, size 0x74, virtual false, abstract: false, final false
inline ::StringW ToString(::StringW  format) ;

/// @brief Method ToUnityGuidString, addr 0x5fab0d4, size 0x48, virtual false, abstract: false, final false
inline ::StringW ToUnityGuidString() ;

/// @brief Method TryParse, addr 0x5faae68, size 0x84, virtual false, abstract: false, final false
static inline bool TryParse(::StringW  str, ::by_ref<::Fusion::NetworkPrefabRef>  guid) ;

constexpr ::GlobalNamespace::NetworkPrefabRef__RawGuidValue_e__FixedBuffer const& __cordl_internal_get_RawGuidValue() const;

constexpr ::GlobalNamespace::NetworkPrefabRef__RawGuidValue_e__FixedBuffer& __cordl_internal_get_RawGuidValue() ;

constexpr int64_t const& __cordl_internal_get__data0() const;

constexpr int64_t& __cordl_internal_get__data0() ;

constexpr int64_t const& __cordl_internal_get__data1() const;

constexpr int64_t& __cordl_internal_get__data1() ;

constexpr void __cordl_internal_set_RawGuidValue(::GlobalNamespace::NetworkPrefabRef__RawGuidValue_e__FixedBuffer  value) ;

constexpr void __cordl_internal_set__data0(int64_t  value) ;

constexpr void __cordl_internal_set__data1(int64_t  value) ;

/// @brief Method .ctor, addr 0x5faadb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int64_t  data0, int64_t  data1) ;

/// @brief Method .ctor, addr 0x5faadb8, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  guid) ;

/// @brief Method .ctor, addr 0x5faacf4, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  guid) ;

/// @brief Method .ctor, addr 0x5faac7c, size 0x14, virtual false, abstract: false, final false
inline void _ctor(uint8_t*  guid) ;

/// @brief Method get_Empty, addr 0x5faace8, size 0xc, virtual false, abstract: false, final false
static inline ::Fusion::NetworkPrefabRef get_Empty() ;

/// @brief Method get_IsValid, addr 0x5faadfc, size 0x20, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IComparable_1<::Fusion::NetworkPrefabRef>"
constexpr ::System::IComparable_1<::Fusion::NetworkPrefabRef>* i___System__IComparable_1___Fusion__NetworkPrefabRef_() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkPrefabRef>"
constexpr ::System::IEquatable_1<::Fusion::NetworkPrefabRef>* i___System__IEquatable_1___Fusion__NetworkPrefabRef_() ;

/// @brief Method op_Equality, addr 0x5faaf40, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::NetworkPrefabRef  a, ::Fusion::NetworkPrefabRef  b) ;

/// @brief Method op_Explicit, addr 0x5fab1c0, size 0x38, virtual false, abstract: false, final false
static inline ::Fusion::NetworkObjectGuid op_Explicit___Fusion__NetworkObjectGuid(::Fusion::NetworkPrefabRef  t) ;

/// @brief Method op_Implicit, addr 0x5faad64, size 0x4c, virtual false, abstract: false, final false
static inline ::Fusion::NetworkPrefabRef op_Implicit___Fusion__NetworkPrefabRef(::System::Guid  guid) ;

/// @brief Method op_Implicit, addr 0x5faae1c, size 0x4c, virtual false, abstract: false, final false
static inline ::System::Guid op_Implicit___System__Guid(::Fusion::NetworkPrefabRef  guid) ;

/// @brief Method op_Inequality, addr 0x5faaf74, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::NetworkPrefabRef  a, ::Fusion::NetworkPrefabRef  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkPrefabRef() ;

// Ctor Parameters [CppParam { name: "RawGuidValue", ty: "::GlobalNamespace::NetworkPrefabRef__RawGuidValue_e__FixedBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data0", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_data1", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkPrefabRef(::GlobalNamespace::NetworkPrefabRef__RawGuidValue_e__FixedBuffer  RawGuidValue, int64_t  _data0, int64_t  _data1) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___RawGuidValue_padding[0x0];
/// [FixedBuffer(typeof(System.Int64), 2)]
/// @brief Field RawGuidValue, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::NetworkPrefabRef__RawGuidValue_e__FixedBuffer  ___RawGuidValue;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___RawGuidValue_padding_forAlignment[0x0];
/// [FixedBuffer(typeof(System.Int64), 2)]
/// @brief Field RawGuidValue, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::NetworkPrefabRef__RawGuidValue_e__FixedBuffer  ___RawGuidValue_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____data0_padding[0x0];
/// @brief Field _data0, offset: 0x0, size: 0x8, def value: None
 int64_t  ____data0;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____data0_padding_forAlignment[0x0];
/// @brief Field _data0, offset: 0x0, size: 0x8, def value: None
 int64_t  ____data0_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x8
 uint8_t  ____data1_padding[0x8];
/// @brief Field _data1, offset: 0x8, size: 0x8, def value: None
 int64_t  ____data1;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x8 for alignment
 uint8_t  ____data1_padding_forAlignment[0x8];
/// @brief Field _data1, offset: 0x8, size: 0x8, def value: None
 int64_t  ____data1_forAlignment;
};
};
public:

/// @brief Field ALIGNMENT offset 0xffffffff size 0x4
static constexpr int32_t  ALIGNMENT{static_cast<int32_t>(0x4)};

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19133};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkPrefabRef) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkPrefabRef/EqualityComparer
class CORDL_TYPE NetworkPrefabRef_EqualityComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabRef>"
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabRef>*() noexcept;

/// @brief Method Equals, addr 0x5fab1f8, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkPrefabRef  x, ::Fusion::NetworkPrefabRef  y) ;

/// @brief Method GetHashCode, addr 0x5fab208, size 0x40, virtual true, abstract: false, final true
inline int32_t GetHashCode(::Fusion::NetworkPrefabRef  obj) ;

static inline ::Fusion::NetworkPrefabRef_EqualityComparer* New_ctor() ;

/// @brief Method .ctor, addr 0x5fab248, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabRef>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabRef>* i___System__Collections__Generic__IEqualityComparer_1___Fusion__NetworkPrefabRef_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkPrefabRef_EqualityComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkPrefabRef_EqualityComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkPrefabRef_EqualityComparer(NetworkPrefabRef_EqualityComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkPrefabRef_EqualityComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkPrefabRef_EqualityComparer(NetworkPrefabRef_EqualityComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19131};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkPrefabRef_EqualityComparer) == 0x10, "Size mismatch!");

} // namespace end def Fusion
