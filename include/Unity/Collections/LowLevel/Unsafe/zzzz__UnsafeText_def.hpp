#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UntypedUnsafeList_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeText)
namespace System {
class IDisposable;
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
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeText;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeText);
DEFINE_IL2CPP_CLASS(::Unity::Collections::LowLevel::Unsafe::UnsafeText, "Unity.Collections.LowLevel.Unsafe", "UnsafeText");
// [DefaultMember("Item")]
// [GenerateTestsForBurstCompatibility]
// [DebuggerDisplay("Length = {Length}, Capacity = {Capacity}, IsCreated = {IsCreated}, IsEmpty = {IsEmpty}")]
// Dependencies Unity.Collections.LowLevel.Unsafe.UntypedUnsafeList
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeText
struct CORDL_TYPE UnsafeText {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_IsCreated)) bool  IsCreated;

 __declspec(property(get=get_Length, put=set_Length)) int32_t  Length;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr operator  ::Unity::Collections::IIndexable_1<uint8_t>*() ;

/// @brief Convert operator to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr operator  ::Unity::Collections::INativeList_1<uint8_t>*() ;

/// @brief Convert operator to "::Unity::Collections::IUTF8Bytes"
constexpr operator  ::Unity::Collections::IUTF8Bytes*() ;

/// @brief Method Dispose, addr 0xaf07fb4, size 0x68, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Free, addr 0xaf07040, size 0xa4, virtual false, abstract: false, final false
static inline void Free(::Unity::Collections::LowLevel::Unsafe::UnsafeText*  data) ;

/// @brief Method GetUnsafePtr, addr 0xaf0801c, size 0x8, virtual true, abstract: false, final true
inline uint8_t* GetUnsafePtr() ;

/// [ExcludeFromBurstCompatTesting("Returns managed string")]
/// @brief Method ToString, addr 0xaf08194, size 0xb8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// [IsReadOnly]
/// @brief Method get_Capacity, addr 0xaf08024, size 0x60, virtual true, abstract: false, final true
inline int32_t get_Capacity() ;

/// [IsReadOnly]
/// @brief Method get_IsCreated, addr 0xaf07f50, size 0x64, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// [IsReadOnly]
/// @brief Method get_Length, addr 0xaf08084, size 0x60, virtual true, abstract: false, final true
inline int32_t get_Length() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Convert to "::Unity::Collections::IIndexable_1<uint8_t>"
constexpr ::Unity::Collections::IIndexable_1<uint8_t>* i___Unity__Collections__IIndexable_1_uint8_t_() ;

/// @brief Convert to "::Unity::Collections::INativeList_1<uint8_t>"
constexpr ::Unity::Collections::INativeList_1<uint8_t>* i___Unity__Collections__INativeList_1_uint8_t_() ;

/// @brief Convert to "::Unity::Collections::IUTF8Bytes"
constexpr ::Unity::Collections::IUTF8Bytes* i___Unity__Collections__IUTF8Bytes() ;

/// @brief Method set_Length, addr 0xaf080e4, size 0xb0, virtual true, abstract: false, final true
inline void set_Length(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UnsafeText() ;

// Ctor Parameters [CppParam { name: "m_UntypedListData", ty: "::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList", modifiers: "", def_value: None, comment: None }]
constexpr UnsafeText(::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList  m_UntypedListData) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30257};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_UntypedListData, offset: 0x0, size: 0x18, def value: None
 ::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList  m_UntypedListData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeText, m_UntypedListData) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Collections::LowLevel::Unsafe::UnsafeText) == 0x18, "Size mismatch!");

} // namespace end def Unity::Collections::LowLevel::Unsafe
