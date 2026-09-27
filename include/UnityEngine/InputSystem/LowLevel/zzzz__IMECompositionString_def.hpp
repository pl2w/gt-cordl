#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/IMECompositionString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionString__buffer_e__FixedBuffer_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IMECompositionString)
namespace GlobalNamespace {
struct IMECompositionString_Enumerator;
}
namespace GlobalNamespace {
struct IMECompositionString__buffer_e__FixedBuffer;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct IMECompositionString;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::IMECompositionString);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::LowLevel::IMECompositionString, "UnityEngine.InputSystem.LowLevel", "IMECompositionString");
// [DefaultMember("Item")]
// Dependencies UnityEngine.InputSystem.LowLevel.IMECompositionString::<buffer>e__FixedBuffer
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// CS Name: UnityEngine.InputSystem.LowLevel.IMECompositionString
#pragma pack(push, 0)
struct CORDL_TYPE IMECompositionString {
public:
// Declarations
using Enumerator = ::GlobalNamespace::IMECompositionString_Enumerator;

using _buffer_e__FixedBuffer = ::GlobalNamespace::IMECompositionString__buffer_e__FixedBuffer;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) char16_t  Item[];

/// @brief Field buffer, offset 0x4, size 0x80 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::GlobalNamespace::IMECompositionString__buffer_e__FixedBuffer  buffer;

/// @brief Field size, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) int32_t  size;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<char16_t>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method GetEnumerator, addr 0xafef498, size 0x94, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<char16_t>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xafef550, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToString, addr 0xafef480, size 0x18, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::GlobalNamespace::IMECompositionString__buffer_e__FixedBuffer const& __cordl_internal_get_buffer() const;

constexpr ::GlobalNamespace::IMECompositionString__buffer_e__FixedBuffer& __cordl_internal_get_buffer() ;

constexpr int32_t const& __cordl_internal_get_size() const;

constexpr int32_t& __cordl_internal_get_size() ;

constexpr void __cordl_internal_set_buffer(::GlobalNamespace::IMECompositionString__buffer_e__FixedBuffer  value) ;

constexpr void __cordl_internal_set_size(int32_t  value) ;

/// @brief Method .ctor, addr 0xafef390, size 0x80, virtual false, abstract: false, final false
inline void _ctor(::StringW  characters) ;

/// @brief Method get_Count, addr 0xafef410, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0xafef418, size 0x68, virtual false, abstract: false, final false
inline char16_t get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<char16_t>"
constexpr ::System::Collections::Generic::IEnumerable_1<char16_t>* i___System__Collections__Generic__IEnumerable_1_char16_t_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

// Ctor Parameters []
// @brief default ctor
constexpr IMECompositionString() ;

// Ctor Parameters [CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "buffer", ty: "::GlobalNamespace::IMECompositionString__buffer_e__FixedBuffer", modifiers: "", def_value: None, comment: None }]
constexpr IMECompositionString(int32_t  size, ::GlobalNamespace::IMECompositionString__buffer_e__FixedBuffer  buffer) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___size_padding[0x0];
/// @brief Field size, offset: 0x0, size: 0x4, def value: None
 int32_t  ___size;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___size_padding_forAlignment[0x0];
/// @brief Field size, offset: 0x0, size: 0x4, def value: None
 int32_t  ___size_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___buffer_padding[0x4];
/// [FixedBuffer(typeof(System.Char), 64)]
/// @brief Field buffer, offset: 0x4, size: 0x80, def value: None
 ::GlobalNamespace::IMECompositionString__buffer_e__FixedBuffer  ___buffer;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___buffer_padding_forAlignment[0x4];
/// [FixedBuffer(typeof(System.Char), 64)]
/// @brief Field buffer, offset: 0x4, size: 0x80, def value: None
 ::GlobalNamespace::IMECompositionString__buffer_e__FixedBuffer  ___buffer_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13753};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x84};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::LowLevel::IMECompositionString) == 0x84, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
