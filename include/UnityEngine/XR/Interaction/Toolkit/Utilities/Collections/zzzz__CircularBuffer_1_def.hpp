#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/Collections/CircularBuffer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CircularBuffer_1)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Collections {
template<typename T>
class CircularBuffer_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1, "UnityEngine.XR.Interaction.Toolkit.Utilities.Collections", "CircularBuffer`1");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Collections {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Utilities.Collections.CircularBuffer`1<T>
class CORDL_TYPE CircularBuffer_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Item)) T  Item[];

 __declspec(property(get=get_capacity)) int32_t  capacity;

 __declspec(property(get=get_count)) int32_t  count;

/// @brief Field m_Buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Buffer, put=__cordl_internal_set_m_Buffer)) ::ArrayW<T>  m_Buffer;

/// @brief Field m_Count, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Count, put=__cordl_internal_set_m_Count)) int32_t  m_Count;

/// @brief Field m_Start, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Start, put=__cordl_internal_set_m_Start)) int32_t  m_Start;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(T  item) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Collections::CircularBuffer_1<T>* New_ctor(int32_t  capacity) ;

constexpr ::ArrayW<T> const& __cordl_internal_get_m_Buffer() const;

constexpr ::ArrayW<T>& __cordl_internal_get_m_Buffer() ;

constexpr int32_t const& __cordl_internal_get_m_Count() const;

constexpr int32_t& __cordl_internal_get_m_Count() ;

constexpr int32_t const& __cordl_internal_get_m_Start() const;

constexpr int32_t& __cordl_internal_get_m_Start() ;

constexpr void __cordl_internal_set_m_Buffer(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set_m_Count(int32_t  value) ;

constexpr void __cordl_internal_set_m_Start(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

/// @brief Method get_capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_capacity() ;

/// @brief Method get_count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_count() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CircularBuffer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CircularBuffer_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CircularBuffer_1(CircularBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CircularBuffer_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CircularBuffer_1(CircularBuffer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11270};

/// @brief Field m_Buffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ___m_Buffer;

/// @brief Field m_Start, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_Start;

/// @brief Field m_Count, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___m_Count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Utilities::Collections
