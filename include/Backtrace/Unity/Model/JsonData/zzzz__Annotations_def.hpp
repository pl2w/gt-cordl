#pragma once
// IWYU pragma private; include "Backtrace/Unity/Model/JsonData/Annotations.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Annotations)
namespace Backtrace::Unity::Json {
class BacktraceJObject;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Exception;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Backtrace::Unity::Model::JsonData {
class Annotations;
}
// Write type traits
MARK_REF_T(::Backtrace::Unity::Model::JsonData::Annotations*);
DEFINE_IL2CPP_CLASS(::Backtrace::Unity::Model::JsonData::Annotations*, "Backtrace.Unity.Model.JsonData", "Annotations");
// Dependencies System.Object
namespace Backtrace::Unity::Model::JsonData {
// Is value type: false
// CS Name: Backtrace.Unity.Model.JsonData.Annotations
class CORDL_TYPE Annotations : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_EnvironmentVariables, put=set_EnvironmentVariables)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  EnvironmentVariables;

 __declspec(property(get=get_Exception, put=set_Exception)) ::System::Exception*  Exception;

/// @brief Field VariablesLoaded, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_VariablesLoaded, put=setStaticF_VariablesLoaded)) bool  VariablesLoaded;

/// @brief Field <Exception>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Exception_k__BackingField, put=__cordl_internal_set__Exception_k__BackingField)) ::System::Exception*  _Exception_k__BackingField;

/// @brief Field _environmentVariablesCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__environmentVariablesCache, put=setStaticF__environmentVariablesCache)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _environmentVariablesCache;

/// @brief Field _gameObjectDepth, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__gameObjectDepth, put=__cordl_internal_set__gameObjectDepth)) int32_t  _gameObjectDepth;

/// @brief Method ConvertGameObject, addr 0x5f18c90, size 0x480, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Json::BacktraceJObject* ConvertGameObject(::UnityEngine::Component*  gameObject, ::StringW  parentName, int32_t  depth) ;

/// @brief Method ConvertGameObject, addr 0x5f183a0, size 0x48c, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Json::BacktraceJObject* ConvertGameObject(::UnityEngine::GameObject*  gameObject, int32_t  depth) ;

/// @brief Method GetJObject, addr 0x5f19110, size 0x2d8, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Json::BacktraceJObject* GetJObject(::UnityEngine::Component*  gameObject, ::StringW  parentName) ;

/// @brief Method GetJObject, addr 0x5f1882c, size 0x464, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Json::BacktraceJObject* GetJObject(::UnityEngine::GameObject*  gameObject, ::StringW  parentName) ;

static inline ::Backtrace::Unity::Model::JsonData::Annotations* New_ctor(::System::Exception*  exception, int32_t  gameObjectDepth) ;

/// @brief Method SetEnvironmentVariables, addr 0x5f17a10, size 0x3e8, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* SetEnvironmentVariables() ;

/// @brief Method ToJson, addr 0x5f17ef4, size 0x4ac, virtual false, abstract: false, final false
inline ::Backtrace::Unity::Json::BacktraceJObject* ToJson() ;

constexpr ::System::Exception* const& __cordl_internal_get__Exception_k__BackingField() const;

constexpr ::System::Exception*& __cordl_internal_get__Exception_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__gameObjectDepth() const;

constexpr int32_t& __cordl_internal_get__gameObjectDepth() ;

constexpr void __cordl_internal_set__Exception_k__BackingField(::System::Exception*  value) ;

constexpr void __cordl_internal_set__gameObjectDepth(int32_t  value) ;

/// @brief Method .ctor, addr 0x5f17ebc, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::System::Exception*  exception, int32_t  gameObjectDepth) ;

static inline bool getStaticF_VariablesLoaded() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF__environmentVariablesCache() ;

/// @brief Method get_EnvironmentVariables, addr 0x5f17e50, size 0x4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_EnvironmentVariables() ;

/// @brief Method get_EnvironmentVariablesCache, addr 0x5f17990, size 0x80, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* get_EnvironmentVariablesCache() ;

/// [CompilerGenerated]
/// @brief Method get_Exception, addr 0x5f17eac, size 0x8, virtual false, abstract: false, final false
inline ::System::Exception* get_Exception() ;

static inline void setStaticF_VariablesLoaded(bool  value) ;

static inline void setStaticF__environmentVariablesCache(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method set_EnvironmentVariables, addr 0x5f17e54, size 0x58, virtual false, abstract: false, final false
inline void set_EnvironmentVariables(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method set_EnvironmentVariablesCache, addr 0x5f17df8, size 0x58, virtual false, abstract: false, final false
static inline void set_EnvironmentVariablesCache(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Exception, addr 0x5f17eb4, size 0x8, virtual false, abstract: false, final false
inline void set_Exception(::System::Exception*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Annotations() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Annotations", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Annotations(Annotations && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Annotations", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Annotations(Annotations const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27624};

/// @brief Field _gameObjectDepth, offset: 0x10, size: 0x4, def value: None
 int32_t  ____gameObjectDepth;

/// [CompilerGenerated]
/// @brief Field <Exception>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Exception*  ____Exception_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Backtrace::Unity::Model::JsonData::Annotations, ____gameObjectDepth) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Backtrace::Unity::Model::JsonData::Annotations, ____Exception_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Backtrace::Unity::Model::JsonData::Annotations) == 0x20, "Size mismatch!");

} // namespace end def Backtrace::Unity::Model::JsonData
