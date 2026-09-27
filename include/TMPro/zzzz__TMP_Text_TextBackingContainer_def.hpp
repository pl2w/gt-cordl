#pragma once
// IWYU pragma private; include "TMPro/TMP_Text_TextBackingContainer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_Text_TextBackingContainer)
// Forward declare root types
namespace GlobalNamespace {
struct TMP_Text_TextBackingContainer;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TMP_Text_TextBackingContainer);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TMP_Text_TextBackingContainer, "TMPro", "TMP_Text/TextBackingContainer");
// [DefaultMember("Item")]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TMPro.TMP_Text/TextBackingContainer
struct CORDL_TYPE TMP_Text_TextBackingContainer {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

 __declspec(property(get=get_Item, put=set_Item)) uint32_t  Item[];

 __declspec(property(get=get_Text)) ::ArrayW<uint32_t>  Text;

/// @brief Method Resize, addr 0xb3a7be8, size 0x6c, virtual false, abstract: false, final false
inline void Resize(int32_t  size) ;

/// @brief Method .ctor, addr 0xb3a7c54, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(int32_t  size) ;

/// @brief Method get_Capacity, addr 0xb3a7b30, size 0x18, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0xb3a7b48, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0xb3a7b58, size 0x30, virtual false, abstract: false, final false
inline uint32_t get_Item(int32_t  index) ;

/// @brief Method get_Text, addr 0xb3a7b28, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint32_t> get_Text() ;

/// @brief Method set_Count, addr 0xb3a7b50, size 0x8, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

/// @brief Method set_Item, addr 0xb3a7b88, size 0x60, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, uint32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TMP_Text_TextBackingContainer() ;

// Ctor Parameters [CppParam { name: "m_Array", ty: "::ArrayW<uint32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TMP_Text_TextBackingContainer(::ArrayW<uint32_t>  m_Array, int32_t  m_Index) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23034};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Array, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<uint32_t>  m_Array;

/// @brief Field m_Index, offset: 0x8, size: 0x4, def value: None
 int32_t  m_Index;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TMP_Text_TextBackingContainer, m_Array) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TMP_Text_TextBackingContainer, m_Index) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TMP_Text_TextBackingContainer) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
