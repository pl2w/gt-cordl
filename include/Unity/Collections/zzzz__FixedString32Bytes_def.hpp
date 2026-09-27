#pragma once
// IWYU pragma private; include "Unity/Collections/FixedString32Bytes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__FixedBytes30_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedString32Bytes)
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
namespace Unity::Collections {
struct CopyError;
}
namespace Unity::Collections {
struct FixedString128Bytes;
}
namespace Unity::Collections {
struct FixedString4096Bytes;
}
namespace Unity::Collections {
struct FixedString512Bytes;
}
namespace Unity::Collections {
struct FixedString64Bytes;
}
namespace Unity::Collections {
template<typename T>
class IIndexable_1;
}
namespace Unity::Collections {
template<typename T>
class INativeList_1;
}
namespace Unity::Collections {
class IUTF8Bytes;
}
// Forward declare root types
namespace Unity::Collections {
struct FixedString32Bytes;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::FixedString32Bytes);
DEFINE_IL2CPP_CLASS(::Unity::Collections::FixedString32Bytes, "Unity.Collections", "FixedString32Bytes");
// [DefaultMember("Item")]
// [GenerateTestsForBurstCompatibility]
// Dependencies Unity.Collections.FixedBytes30
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.FixedString32Bytes
#pragma pack(push, 0)
struct CORDL_TYPE FixedString32Bytes {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Length, put=set_Length)) int32_t  Length;

/// [CreateProperty]
/// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
/// @brief [ExcludeFromBurstCompatTesting("Returns managed string")]
 __declspec(property(get=get_Value)) ::StringW  Value;

/// @brief Convert operator to "::System::IComparable_1<::StringW>"
constexpr operator  ::System::IComparable_1<::StringW>*() ;

/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr operator  ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>*() ;

/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr operator  ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>*() ;

/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr operator  ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>*() ;

/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr operator  ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>*() ;

/// @brief Convert operator to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr operator  ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::StringW>"
constexpr operator  ::System::IEquatable_1<::StringW>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr operator  ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>*() ;

/// @brief Convert operator to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr operator  ::Unity::Collections::IIndexable_1<uint8_t>*() ;

/// @brief Convert operator to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr operator  ::Unity::Collections::INativeList_1<uint8_t>*() ;

/// @brief Convert operator to "::Unity::Collections::IUTF8Bytes"
constexpr operator  ::Unity::Collections::IUTF8Bytes*() ;

/// [ExcludeFromBurstCompatTesting("Takes managed string")]
/// @brief Method CompareTo, addr 0xaf03cbc, size 0x24, virtual true, abstract: false, final true
inline int32_t CompareTo(::StringW  other) ;

/// @brief Method CompareTo, addr 0xaf040ac, size 0x58, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString128Bytes  other) ;

/// @brief Method CompareTo, addr 0xaf03e5c, size 0x58, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString32Bytes  other) ;

/// @brief Method CompareTo, addr 0xaf042cc, size 0x58, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString4096Bytes  other) ;

/// @brief Method CompareTo, addr 0xaf041bc, size 0x58, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString512Bytes  other) ;

/// @brief Method CompareTo, addr 0xaf03f9c, size 0x58, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString64Bytes  other) ;

/// [ExcludeFromBurstCompatTesting("Takes managed object")]
/// @brief Method Equals, addr 0xaf04438, size 0x238, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// [ExcludeFromBurstCompatTesting("Takes managed string")]
/// @brief Method Equals, addr 0xaf03ce0, size 0x90, virtual true, abstract: false, final true
inline bool Equals(::StringW  other) ;

/// @brief Method Equals, addr 0xaf041b8, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString128Bytes  other) ;

/// @brief Method Equals, addr 0xaf03f98, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString32Bytes  other) ;

/// @brief Method Equals, addr 0xaf043d8, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString4096Bytes  other) ;

/// @brief Method Equals, addr 0xaf042c8, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString512Bytes  other) ;

/// @brief Method Equals, addr 0xaf040a8, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString64Bytes  other) ;

/// @brief Method GetHashCode, addr 0xaf043f0, size 0x48, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// [IsReadOnly]
/// @brief Method GetUnsafePtr, addr 0xaf03c94, size 0x8, virtual true, abstract: false, final true
inline uint8_t* GetUnsafePtr() ;

/// [ExcludeFromBurstCompatTesting("Takes managed string")]
/// @brief Method Initialize, addr 0xaf03e04, size 0x58, virtual false, abstract: false, final false
inline ::Unity::Collections::CopyError Initialize(::StringW  source) ;

/// [ExcludeFromBurstCompatTesting("Returns managed string")]
/// @brief Method ToString, addr 0xaf03c4c, size 0x48, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// [ExcludeFromBurstCompatTesting("Takes managed string")]
/// @brief Method .ctor, addr 0xaf03df8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::StringW  source) ;

/// [IsReadOnly]
/// @brief Method get_Capacity, addr 0xaf03cb4, size 0x8, virtual true, abstract: false, final true
inline int32_t get_Capacity() ;

/// [IsReadOnly]
/// @brief Method get_Length, addr 0xaf03c9c, size 0x8, virtual true, abstract: false, final true
inline int32_t get_Length() ;

/// @brief Method get_Value, addr 0xaf03c48, size 0x4, virtual false, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Convert to "::System::IComparable_1<::StringW>"
constexpr ::System::IComparable_1<::StringW>* i___System__IComparable_1___StringW_() ;

/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString128Bytes>* i___System__IComparable_1___Unity__Collections__FixedString128Bytes_() ;

/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString32Bytes>* i___System__IComparable_1___Unity__Collections__FixedString32Bytes_() ;

/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString4096Bytes>* i___System__IComparable_1___Unity__Collections__FixedString4096Bytes_() ;

/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString512Bytes>* i___System__IComparable_1___Unity__Collections__FixedString512Bytes_() ;

/// @brief Convert to "::System::IComparable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IComparable_1<::Unity::Collections::FixedString64Bytes>* i___System__IComparable_1___Unity__Collections__FixedString64Bytes_() ;

/// @brief Convert to "::System::IEquatable_1<::StringW>"
constexpr ::System::IEquatable_1<::StringW>* i___System__IEquatable_1___StringW_() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString128Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString128Bytes_() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString32Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString32Bytes_() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString4096Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString4096Bytes_() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString512Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString512Bytes_() ;

/// @brief Convert to "::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>"
constexpr ::System::IEquatable_1<::Unity::Collections::FixedString64Bytes>* i___System__IEquatable_1___Unity__Collections__FixedString64Bytes_() ;

/// @brief Convert to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr ::Unity::Collections::IIndexable_1<uint8_t>* i___Unity__Collections__IIndexable_1_uint8_t_() ;

/// @brief Convert to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr ::Unity::Collections::INativeList_1<uint8_t>* i___Unity__Collections__INativeList_1_uint8_t_() ;

/// @brief Convert to "::Unity::Collections::IUTF8Bytes"
constexpr ::Unity::Collections::IUTF8Bytes* i___Unity__Collections__IUTF8Bytes() ;

/// @brief Method op_Equality, addr 0xaf04104, size 0xb4, virtual false, abstract: false, final false
static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes>  b) ;

/// @brief Method op_Equality, addr 0xaf03eb4, size 0xa0, virtual false, abstract: false, final false
static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes>  b) ;

/// @brief Method op_Equality, addr 0xaf04324, size 0xb4, virtual false, abstract: false, final false
static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes>  b) ;

/// @brief Method op_Equality, addr 0xaf04214, size 0xb4, virtual false, abstract: false, final false
static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes>  b) ;

/// @brief Method op_Equality, addr 0xaf03ff4, size 0xb4, virtual false, abstract: false, final false
static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString64Bytes>  b) ;

/// [ExcludeFromBurstCompatTesting("Takes managed string")]
/// @brief Method op_Implicit, addr 0xaf043dc, size 0x14, virtual false, abstract: false, final false
static inline ::Unity::Collections::FixedString32Bytes op_Implicit___Unity__Collections__FixedString32Bytes(::StringW  b) ;

/// @brief Method op_Inequality, addr 0xaf03f80, size 0x18, virtual false, abstract: false, final false
static inline bool op_Inequality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes>  b) ;

/// @brief Method set_Length, addr 0xaf03ca4, size 0x10, virtual true, abstract: false, final true
inline void set_Length(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FixedString32Bytes() ;

// Ctor Parameters [CppParam { name: "utf8LengthInBytes", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bytes", ty: "::Unity::Collections::FixedBytes30", modifiers: "", def_value: None, comment: None }]
constexpr FixedString32Bytes(uint16_t  utf8LengthInBytes, ::Unity::Collections::FixedBytes30  bytes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30139};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [SerializeField]
/// @brief Field utf8LengthInBytes, offset: 0x0, size: 0x2, def value: None
 uint16_t  utf8LengthInBytes;

/// [SerializeField]
/// @brief Field bytes, offset: 0x2, size: 0x1e, def value: None
 ::Unity::Collections::FixedBytes30  bytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Unity::Collections::FixedString32Bytes, utf8LengthInBytes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::FixedString32Bytes, bytes) == 0x2, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::FixedString32Bytes) == 0x20, "Size mismatch!");

} // namespace end def Unity::Collections
