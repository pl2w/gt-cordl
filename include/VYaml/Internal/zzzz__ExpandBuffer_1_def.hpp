#pragma once
// IWYU pragma private; include "VYaml/Internal/ExpandBuffer_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExpandBuffer_1)
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace VYaml::Internal {
template<typename T>
class ExpandBuffer_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::VYaml::Internal::ExpandBuffer_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::VYaml::Internal::ExpandBuffer_1, "VYaml.Internal", "ExpandBuffer`1");
// [NullableContext(1)]
// [Nullable(0)]
// [DefaultMember("Item")]
// Dependencies System.Object
namespace VYaml::Internal {
// cpp template
template<typename T>
// Is value type: false
// CS Name: VYaml.Internal.ExpandBuffer`1<T>
class CORDL_TYPE ExpandBuffer_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Item)) T  Item[];

 __declspec(property(get=get_Length, put=set_Length)) int32_t  Length;

/// @brief Field <Length>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Length_k__BackingField, put=__cordl_internal_set__Length_k__BackingField)) int32_t  _Length_k__BackingField;

/// @brief Field buffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<T>  buffer;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(T  item) ;

/// @brief Method AsSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Span_1<T> AsSpan() ;

/// @brief Method AsSpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Span_1<T> AsSpan(int32_t  length) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Grow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Grow() ;

static inline ::VYaml::Internal::ExpandBuffer_1<T>* New_ctor(int32_t  capacity) ;

/// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> Peek() ;

/// @brief Method Pop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> Pop() ;

/// @brief Method SetCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetCapacity(int32_t  newCapacity) ;

/// @brief Method TryPop, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryPop(::by_ref<T>  value) ;

constexpr int32_t const& __cordl_internal_get__Length_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Length_k__BackingField() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<T>& __cordl_internal_get_buffer() ;

constexpr void __cordl_internal_set__Length_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_buffer(::ArrayW<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> get_Item(int32_t  index) ;

/// [CompilerGenerated]
/// @brief Method get_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Length() ;

/// [CompilerGenerated]
/// @brief Method set_Length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Length(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExpandBuffer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExpandBuffer_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExpandBuffer_1(ExpandBuffer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExpandBuffer_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExpandBuffer_1(ExpandBuffer_1 const& ) = delete;

/// @brief Field GrowFactor offset 0xffffffff size 0x4
static constexpr int32_t  GrowFactor{static_cast<int32_t>(0xc8)};

/// @brief Field MinimumGrow offset 0xffffffff size 0x4
static constexpr int32_t  MinimumGrow{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29028};

/// [CompilerGenerated]
/// @brief Field <Length>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Length_k__BackingField;

/// @brief Field buffer, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<T>  ___buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def VYaml::Internal
