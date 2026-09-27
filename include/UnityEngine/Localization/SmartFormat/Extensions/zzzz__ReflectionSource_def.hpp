#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/ReflectionSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ReflectionSource)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class ISelectorInfo;
}
namespace UnityEngine::Localization::SmartFormat::Core::Extensions {
class ISource;
}
namespace UnityEngine::Localization::SmartFormat::Extensions {
class ReflectionSource___c__DisplayClass5_0;
}
namespace UnityEngine::Localization::SmartFormat {
class SmartFormatter;
}
// Forward declare root types
namespace UnityEngine::Localization::SmartFormat::Extensions {
class ReflectionSource;
}
namespace UnityEngine::Localization::SmartFormat::Extensions {
class ReflectionSource___c__DisplayClass5_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource*);
MARK_REF_T(::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource*, "UnityEngine.Localization.SmartFormat.Extensions", "ReflectionSource");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0*, "UnityEngine.Localization.SmartFormat.Extensions", "ReflectionSource/<>c__DisplayClass5_0");
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.ReflectionSource
class CORDL_TYPE ReflectionSource : public ::System::Object {
public:
// Declarations
using __c__DisplayClass5_0 = ::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0;

/// @brief [TupleElementNames(new[] { null, null, "field", "method" })]
 __declspec(property(get=get_TypeCache)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::ValueTuple_2<::System::Reflection::FieldInfo*,::System::Reflection::MethodInfo*>>*  TypeCache;

/// @brief Field k_Empty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_Empty, put=setStaticF_k_Empty)) ::ArrayW<::System::Object*>  k_Empty;

/// @brief Field m_TypeCache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TypeCache, put=__cordl_internal_set_m_TypeCache)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::ValueTuple_2<::System::Reflection::FieldInfo*,::System::Reflection::MethodInfo*>>*  m_TypeCache;

/// @brief Convert operator to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr operator  ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource*() noexcept;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource* New_ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter) ;

/// @brief Method TryEvaluateSelector, addr 0xb04173c, size 0xb08, virtual true, abstract: false, final true
inline bool TryEvaluateSelector(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  selectorInfo) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::ValueTuple_2<::System::Reflection::FieldInfo*,::System::Reflection::MethodInfo*>>* const& __cordl_internal_get_m_TypeCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::ValueTuple_2<::System::Reflection::FieldInfo*,::System::Reflection::MethodInfo*>>*& __cordl_internal_get_m_TypeCache() ;

constexpr void __cordl_internal_set_m_TypeCache(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::ValueTuple_2<::System::Reflection::FieldInfo*,::System::Reflection::MethodInfo*>>*  value) ;

/// @brief Method .ctor, addr 0xb028144, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Localization::SmartFormat::SmartFormatter*  formatter) ;

static inline ::ArrayW<::System::Object*> getStaticF_k_Empty() ;

/// @brief Method get_TypeCache, addr 0xb0416b8, size 0x84, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::ValueTuple_2<::System::Reflection::FieldInfo*,::System::Reflection::MethodInfo*>>* get_TypeCache() ;

/// @brief Convert to "::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource"
constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISource* i___UnityEngine__Localization__SmartFormat__Core__Extensions__ISource() noexcept;

static inline void setStaticF_k_Empty(::ArrayW<::System::Object*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionSource(ReflectionSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionSource(ReflectionSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25200};

/// [TupleElementNames(new[] { null, null, "field", "method" })]
/// @brief Field m_TypeCache, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*,::StringW>,::System::ValueTuple_2<::System::Reflection::FieldInfo*,::System::Reflection::MethodInfo*>>*  ___m_TypeCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource, ___m_TypeCache) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::SmartFormat::Extensions {
// Is value type: false
// CS Name: UnityEngine.Localization.SmartFormat.Extensions.ReflectionSource/<>c__DisplayClass5_0
class CORDL_TYPE ReflectionSource___c__DisplayClass5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field selector, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_selector, put=__cordl_internal_set_selector)) ::StringW  selector;

/// @brief Field selectorInfo, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_selectorInfo, put=__cordl_internal_set_selectorInfo)) ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  selectorInfo;

static inline ::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0* New_ctor() ;

/// @brief Method <TryEvaluateSelector>b__0, addr 0xb0422c0, size 0xec, virtual false, abstract: false, final false
inline bool _TryEvaluateSelector_b__0(::System::Reflection::MemberInfo*  m) ;

constexpr ::StringW const& __cordl_internal_get_selector() const;

constexpr ::StringW& __cordl_internal_get_selector() ;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo* const& __cordl_internal_get_selectorInfo() const;

constexpr ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*& __cordl_internal_get_selectorInfo() ;

constexpr void __cordl_internal_set_selector(::StringW  value) ;

constexpr void __cordl_internal_set_selectorInfo(::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  value) ;

/// @brief Method .ctor, addr 0xb042244, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionSource___c__DisplayClass5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionSource___c__DisplayClass5_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionSource___c__DisplayClass5_0(ReflectionSource___c__DisplayClass5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionSource___c__DisplayClass5_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionSource___c__DisplayClass5_0(ReflectionSource___c__DisplayClass5_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25199};

/// @brief Field selector, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___selector;

/// @brief Field selectorInfo, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::Core::Extensions::ISelectorInfo*  ___selectorInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0, ___selector) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0, ___selectorInfo) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::SmartFormat::Extensions::ReflectionSource___c__DisplayClass5_0) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::SmartFormat::Extensions
