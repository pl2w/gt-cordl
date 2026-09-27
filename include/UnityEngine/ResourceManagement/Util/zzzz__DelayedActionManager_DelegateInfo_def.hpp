#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/DelayedActionManager_DelegateInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DelayedActionManager_DelegateInfo)
namespace System {
class Delegate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct DelayedActionManager_DelegateInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DelayedActionManager_DelegateInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DelayedActionManager_DelegateInfo, "UnityEngine.ResourceManagement.Util", "DelayedActionManager/DelegateInfo");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ResourceManagement.Util.DelayedActionManager/DelegateInfo
struct CORDL_TYPE DelayedActionManager_DelegateInfo {
public:
// Declarations
 __declspec(property(get=get_InvocationTime, put=set_InvocationTime)) float_t  InvocationTime;

/// @brief Field s_Id, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Id, put=setStaticF_s_Id)) int32_t  s_Id;

/// @brief Method Invoke, addr 0xb2fa098, size 0x154, virtual false, abstract: false, final false
inline void Invoke() ;

/// @brief Method ToString, addr 0xb2fa4b0, size 0x3b8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xb2f9a5c, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::System::Delegate*  d, float_t  invocationTime, /* [ParamArray] */ ::ArrayW<::System::Object*>  p) ;

static inline int32_t getStaticF_s_Id() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_InvocationTime, addr 0xb2fa4a0, size 0x8, virtual false, abstract: false, final false
inline float_t get_InvocationTime() ;

static inline void setStaticF_s_Id(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_InvocationTime, addr 0xb2fa4a8, size 0x8, virtual false, abstract: false, final false
inline void set_InvocationTime(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DelayedActionManager_DelegateInfo() ;

// Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Delegate", ty: "::System::Delegate*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Target", ty: "::ArrayW<::System::Object*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_InvocationTime_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr DelayedActionManager_DelegateInfo(int32_t  m_Id, ::System::Delegate*  m_Delegate, ::ArrayW<::System::Object*>  m_Target, float_t  _InvocationTime_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28572};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field m_Id, offset: 0x0, size: 0x4, def value: None
 int32_t  m_Id;

/// @brief Field m_Delegate, offset: 0x8, size: 0x8, def value: None
 ::System::Delegate*  m_Delegate;

/// @brief Field m_Target, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  m_Target;

/// [CompilerGenerated]
/// @brief Field <InvocationTime>k__BackingField, offset: 0x18, size: 0x4, def value: None
 float_t  _InvocationTime_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DelayedActionManager_DelegateInfo, m_Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DelayedActionManager_DelegateInfo, m_Delegate) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DelayedActionManager_DelegateInfo, m_Target) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DelayedActionManager_DelegateInfo, _InvocationTime_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DelayedActionManager_DelegateInfo) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
