#pragma once
// IWYU pragma private; include "Unity/Collections/FixedString4096Bytes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__FixedBytes4094_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedString4096Bytes)
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
struct FixedString128Bytes;
}
namespace Unity::Collections {
struct FixedString32Bytes;
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
struct FixedString4096Bytes;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::FixedString4096Bytes);
DEFINE_IL2CPP_CLASS(::Unity::Collections::FixedString4096Bytes, "Unity.Collections", "FixedString4096Bytes");
// [DefaultMember("Item")]
// [GenerateTestsForBurstCompatibility]
// Dependencies Unity.Collections.FixedBytes4094
namespace Unity::Collections {
// Is value type: true
// CS Name: Unity.Collections.FixedString4096Bytes
#pragma pack(push, 0)
struct CORDL_TYPE FixedString4096Bytes {
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
/// @brief Method CompareTo, addr 0xaf06210, size 0x24, virtual true, abstract: false, final true
inline int32_t CompareTo(::StringW  other) ;

/// @brief Method CompareTo, addr 0xaf064e4, size 0x58, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString128Bytes  other) ;

/// @brief Method CompareTo, addr 0xaf062c4, size 0x58, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString32Bytes  other) ;

/// @brief Method CompareTo, addr 0xaf06704, size 0x58, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString4096Bytes  other) ;

/// @brief Method CompareTo, addr 0xaf065f4, size 0x58, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString512Bytes  other) ;

/// @brief Method CompareTo, addr 0xaf063d4, size 0x58, virtual true, abstract: false, final true
inline int32_t CompareTo(::Unity::Collections::FixedString64Bytes  other) ;

/// [ExcludeFromBurstCompatTesting("Takes managed object")]
/// @brief Method Equals, addr 0xaf06848, size 0x238, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// [ExcludeFromBurstCompatTesting("Takes managed string")]
/// @brief Method Equals, addr 0xaf06234, size 0x90, virtual true, abstract: false, final true
inline bool Equals(::StringW  other) ;

/// @brief Method Equals, addr 0xaf065f0, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString128Bytes  other) ;

/// @brief Method Equals, addr 0xaf063d0, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString32Bytes  other) ;

/// @brief Method Equals, addr 0xaf067fc, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString4096Bytes  other) ;

/// @brief Method Equals, addr 0xaf06700, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString512Bytes  other) ;

/// @brief Method Equals, addr 0xaf064e0, size 0x4, virtual true, abstract: false, final true
inline bool Equals(::Unity::Collections::FixedString64Bytes  other) ;

/// @brief Method GetHashCode, addr 0xaf06800, size 0x48, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// [IsReadOnly]
/// @brief Method GetUnsafePtr, addr 0xaf061e8, size 0x8, virtual true, abstract: false, final true
inline uint8_t* GetUnsafePtr() ;

/// [ExcludeFromBurstCompatTesting("Returns managed string")]
/// @brief Method ToString, addr 0xaf061a0, size 0x48, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// [IsReadOnly]
/// @brief Method get_Capacity, addr 0xaf06208, size 0x8, virtual true, abstract: false, final true
inline int32_t get_Capacity() ;

/// [IsReadOnly]
/// @brief Method get_Length, addr 0xaf061f0, size 0x8, virtual true, abstract: false, final true
inline int32_t get_Length() ;

/// @brief Method get_Value, addr 0xaf0619c, size 0x4, virtual false, abstract: false, final false
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

/// @brief Method op_Equality, addr 0xaf0653c, size 0xb4, virtual false, abstract: false, final false
static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString128Bytes>  b) ;

/// @brief Method op_Equality, addr 0xaf0631c, size 0xb4, virtual false, abstract: false, final false
static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString32Bytes>  b) ;

/// @brief Method op_Equality, addr 0xaf0675c, size 0xa0, virtual false, abstract: false, final false
static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes>  b) ;

/// @brief Method op_Equality, addr 0xaf0664c, size 0xb4, virtual false, abstract: false, final false
static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString512Bytes>  b) ;

/// @brief Method op_Equality, addr 0xaf0642c, size 0xb4, virtual false, abstract: false, final false
static inline bool op_Equality(/* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString4096Bytes>  a, /* [IsReadOnly] */ ::by_ref<::Unity::Collections::FixedString64Bytes>  b) ;

/// @brief Method set_Length, addr 0xaf061f8, size 0x10, virtual true, abstract: false, final true
inline void set_Length(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr FixedString4096Bytes() ;

// Ctor Parameters [CppParam { name: "utf8LengthInBytes", ty: "uint16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bytes", ty: "::Unity::Collections::FixedBytes4094", modifiers: "", def_value: None, comment: None }]
constexpr FixedString4096Bytes(uint16_t  utf8LengthInBytes, ::Unity::Collections::FixedBytes4094  bytes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30147};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1000};

/// [SerializeField]
/// @brief Field utf8LengthInBytes, offset: 0x0, size: 0x2, def value: None
 uint16_t  utf8LengthInBytes;

/// [SerializeField]
/// @brief Field bytes, offset: 0x2, size: 0xffe, def value: None
 ::Unity::Collections::FixedBytes4094  bytes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Unity::Collections::FixedString4096Bytes, utf8LengthInBytes) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::FixedString4096Bytes, bytes) == 0x2, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::FixedString4096Bytes) == 0x1000, "Size mismatch!");

} // namespace end def Unity::Collections
