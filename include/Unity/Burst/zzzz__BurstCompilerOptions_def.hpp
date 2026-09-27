#pragma once
// IWYU pragma private; include "Unity/Burst/BurstCompilerOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BurstCompilerOptions)
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Action;
}
namespace Unity::Burst {
class BurstCompileAttribute;
}
// Forward declare root types
namespace Unity::Burst {
class BurstCompilerOptions;
}
// Write type traits
MARK_REF_T(::Unity::Burst::BurstCompilerOptions*);
DEFINE_IL2CPP_CLASS(::Unity::Burst::BurstCompilerOptions*, "Unity.Burst", "BurstCompilerOptions");
// Dependencies System.Object
namespace Unity::Burst {
// Is value type: false
// CS Name: Unity.Burst.BurstCompilerOptions
class CORDL_TYPE BurstCompilerOptions : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_EnableBurstCompilation, put=set_EnableBurstCompilation)) bool  EnableBurstCompilation;

 __declspec(property(put=set_EnableBurstSafetyChecks)) bool  EnableBurstSafetyChecks;

/// @brief Field ForceBurstCompilationSynchronously, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_ForceBurstCompilationSynchronously, put=setStaticF_ForceBurstCompilationSynchronously)) bool  ForceBurstCompilationSynchronously;

/// @brief Field ForceDisableBurstCompilation, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_ForceDisableBurstCompilation, put=setStaticF_ForceDisableBurstCompilation)) bool  ForceDisableBurstCompilation;

 __declspec(property(get=get_IsGlobal)) bool  IsGlobal;

/// @brief Field IsSecondaryUnityProcess, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_IsSecondaryUnityProcess, put=setStaticF_IsSecondaryUnityProcess)) bool  IsSecondaryUnityProcess;

 __declspec(property(get=get_OptionsChanged)) ::System::Action*  OptionsChanged;

/// @brief Field <IsGlobal>k__BackingField, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsGlobal_k__BackingField, put=__cordl_internal_set__IsGlobal_k__BackingField)) bool  _IsGlobal_k__BackingField;

/// @brief Field <OptionsChanged>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__OptionsChanged_k__BackingField, put=__cordl_internal_set__OptionsChanged_k__BackingField)) ::System::Action*  _OptionsChanged_k__BackingField;

/// @brief Field _enableBurstCompilation, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__enableBurstCompilation, put=__cordl_internal_set__enableBurstCompilation)) bool  _enableBurstCompilation;

/// @brief Field _enableBurstSafetyChecks, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__enableBurstSafetyChecks, put=__cordl_internal_set__enableBurstSafetyChecks)) bool  _enableBurstSafetyChecks;

/// @brief Method CheckIsSecondaryUnityProcess, addr 0xae81294, size 0x8, virtual false, abstract: false, final false
static inline bool CheckIsSecondaryUnityProcess() ;

/// @brief Method GetBurstCompileAttribute, addr 0xae80d28, size 0x3f4, virtual false, abstract: false, final false
static inline ::Unity::Burst::BurstCompileAttribute* GetBurstCompileAttribute(::System::Reflection::MemberInfo*  memberInfo) ;

/// @brief Method HasBurstCompileAttribute, addr 0xae80348, size 0xc0, virtual false, abstract: false, final false
static inline bool HasBurstCompileAttribute(::System::Reflection::MemberInfo*  member) ;

/// @brief Method MaybeTriggerRecompilation, addr 0xae80c78, size 0x4, virtual false, abstract: false, final false
inline void MaybeTriggerRecompilation() ;

static inline ::Unity::Burst::BurstCompilerOptions* New_ctor(bool  isGlobal) ;

/// @brief Method OnOptionsChanged, addr 0xae80c5c, size 0x1c, virtual false, abstract: false, final false
inline void OnOptionsChanged() ;

/// @brief Method TryGetAttribute, addr 0xae80c84, size 0xa4, virtual false, abstract: false, final false
static inline bool TryGetAttribute(::System::Reflection::MemberInfo*  member, ::by_ref<::Unity::Burst::BurstCompileAttribute*>  attribute) ;

constexpr bool const& __cordl_internal_get__IsGlobal_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsGlobal_k__BackingField() ;

constexpr ::System::Action* const& __cordl_internal_get__OptionsChanged_k__BackingField() const;

constexpr ::System::Action*& __cordl_internal_get__OptionsChanged_k__BackingField() ;

constexpr bool const& __cordl_internal_get__enableBurstCompilation() const;

constexpr bool& __cordl_internal_get__enableBurstCompilation() ;

constexpr bool const& __cordl_internal_get__enableBurstSafetyChecks() const;

constexpr bool& __cordl_internal_get__enableBurstSafetyChecks() ;

constexpr void __cordl_internal_set__IsGlobal_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__OptionsChanged_k__BackingField(::System::Action*  value) ;

constexpr void __cordl_internal_set__enableBurstCompilation(bool  value) ;

constexpr void __cordl_internal_set__enableBurstSafetyChecks(bool  value) ;

/// @brief Method .ctor, addr 0xae80508, size 0x64, virtual false, abstract: false, final false
inline void _ctor(bool  isGlobal) ;

static inline bool getStaticF_ForceBurstCompilationSynchronously() ;

static inline bool getStaticF_ForceDisableBurstCompilation() ;

static inline bool getStaticF_IsSecondaryUnityProcess() ;

/// @brief Method get_EnableBurstCompilation, addr 0xae80c54, size 0x8, virtual false, abstract: false, final false
inline bool get_EnableBurstCompilation() ;

/// [CompilerGenerated]
/// @brief Method get_IsGlobal, addr 0xae80c4c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsGlobal() ;

/// [CompilerGenerated]
/// @brief Method get_OptionsChanged, addr 0xae80c7c, size 0x8, virtual false, abstract: false, final false
inline ::System::Action* get_OptionsChanged() ;

static inline void setStaticF_ForceBurstCompilationSynchronously(bool  value) ;

static inline void setStaticF_ForceDisableBurstCompilation(bool  value) ;

static inline void setStaticF_IsSecondaryUnityProcess(bool  value) ;

/// @brief Method set_EnableBurstCompilation, addr 0xae80afc, size 0x120, virtual false, abstract: false, final false
inline void set_EnableBurstCompilation(bool  value) ;

/// @brief Method set_EnableBurstSafetyChecks, addr 0xae80c1c, size 0x30, virtual false, abstract: false, final false
inline void set_EnableBurstSafetyChecks(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstCompilerOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstCompilerOptions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstCompilerOptions(BurstCompilerOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstCompilerOptions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstCompilerOptions(BurstCompilerOptions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32171};

/// @brief Field _enableBurstCompilation, offset: 0x10, size: 0x1, def value: None
 bool  ____enableBurstCompilation;

/// @brief Field _enableBurstSafetyChecks, offset: 0x11, size: 0x1, def value: None
 bool  ____enableBurstSafetyChecks;

/// [CompilerGenerated]
/// @brief Field <IsGlobal>k__BackingField, offset: 0x12, size: 0x1, def value: None
 bool  ____IsGlobal_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <OptionsChanged>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Action*  ____OptionsChanged_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::BurstCompilerOptions, ____enableBurstCompilation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompilerOptions, ____enableBurstSafetyChecks) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompilerOptions, ____IsGlobal_k__BackingField) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Unity::Burst::BurstCompilerOptions, ____OptionsChanged_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Burst::BurstCompilerOptions) == 0x20, "Size mismatch!");

} // namespace end def Unity::Burst
