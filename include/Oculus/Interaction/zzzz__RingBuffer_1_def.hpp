#pragma once
// IWYU pragma private; include "Oculus/Interaction/RingBuffer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RingBuffer_1)
// Forward declare root types
namespace Oculus::Interaction {
template<typename T>
class RingBuffer_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::RingBuffer_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::RingBuffer_1, "Oculus.Interaction", "RingBuffer`1");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace Oculus::Interaction {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Oculus.Interaction.RingBuffer`1<T>
class CORDL_TYPE RingBuffer_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) T  Item[];

/// @brief Field _buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<T>  _buffer;

/// @brief Field _capacity, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__capacity, put=__cordl_internal_set__capacity)) int32_t  _capacity;

/// @brief Field _count, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__count, put=__cordl_internal_set__count)) int32_t  _count;

/// @brief Field _head, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__head, put=__cordl_internal_set__head)) int32_t  _head;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(T  item) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::Oculus::Interaction::RingBuffer_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Peek(int32_t  offset) ;

constexpr ::ArrayW<T> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<T>& __cordl_internal_get__buffer() ;

constexpr int32_t const& __cordl_internal_get__capacity() const;

constexpr int32_t& __cordl_internal_get__capacity() ;

constexpr int32_t const& __cordl_internal_get__count() const;

constexpr int32_t& __cordl_internal_get__count() ;

constexpr int32_t const& __cordl_internal_get__head() const;

constexpr int32_t& __cordl_internal_get__head() ;

constexpr void __cordl_internal_set__buffer(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set__capacity(int32_t  value) ;

constexpr void __cordl_internal_set__count(int32_t  value) ;

constexpr void __cordl_internal_set__head(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RingBuffer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RingBuffer_1(RingBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RingBuffer_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RingBuffer_1(RingBuffer_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16038};

/// @brief Field _buffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ____buffer;

/// @brief Field _capacity, offset: 0x18, size: 0x4, def value: None
 int32_t  ____capacity;

/// @brief Field _head, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____head;

/// @brief Field _count, offset: 0x20, size: 0x4, def value: None
 int32_t  ____count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
