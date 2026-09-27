#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightCookieManager_WorkSlice_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightCookieManager_WorkSlice_1)
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct LightCookieManager_WorkSlice_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::LightCookieManager_WorkSlice_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::LightCookieManager_WorkSlice_1, "UnityEngine.Rendering.Universal", "LightCookieManager/WorkSlice`1");
// [IsReadOnly]
// [DefaultMember("Item")]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<T>
struct CORDL_TYPE LightCookieManager_WorkSlice_1 {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

 __declspec(property(get=get_capacity)) int32_t  capacity;

 __declspec(property(get=get_length)) int32_t  length;

/// @brief Method Sort, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Sort(::System::Func_3<T,T,int32_t>*  compare) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<T>  src, int32_t  srcLen) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<T>  src, int32_t  srcStart, int32_t  srcLen) ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

/// @brief Method get_capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_capacity() ;

/// @brief Method get_length, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_length() ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, T  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr LightCookieManager_WorkSlice_1() ;

// Ctor Parameters [CppParam { name: "m_Data", ty: "::ArrayW<T>", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Start", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LightCookieManager_WorkSlice_1(::ArrayW<T>  m_Data, int32_t  m_Start, int32_t  m_Length) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18416};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<T>  m_Data;

/// @brief Field m_Start, offset: 0x8, size: 0x4, def value: None
 int32_t  m_Start;

/// @brief Field m_Length, offset: 0xc, size: 0x4, def value: None
 int32_t  m_Length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
