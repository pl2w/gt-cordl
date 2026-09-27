#pragma once
// IWYU pragma private; include "PlayFab/Json/SimpleJsonInstance.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/Json/zzzz__PocoJsonSerializerStrategy_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SimpleJsonInstance)
namespace PlayFab::Json {
class SimpleJsonInstance_PlayFabSimpleJsonCuztomization;
}
namespace PlayFab {
class IPlayFabPlugin;
}
namespace PlayFab {
class ISerializerPlugin;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace PlayFab::Json {
class SimpleJsonInstance;
}
namespace PlayFab::Json {
class SimpleJsonInstance_PlayFabSimpleJsonCuztomization;
}
// Write type traits
MARK_REF_T(::PlayFab::Json::SimpleJsonInstance*);
MARK_REF_T(::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*);
DEFINE_IL2CPP_CLASS(::PlayFab::Json::SimpleJsonInstance*, "PlayFab.Json", "SimpleJsonInstance");
DEFINE_IL2CPP_CLASS(::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*, "PlayFab.Json", "SimpleJsonInstance/PlayFabSimpleJsonCuztomization");
// Dependencies System.Object
namespace PlayFab::Json {
// Is value type: false
// CS Name: PlayFab.Json.SimpleJsonInstance
class CORDL_TYPE SimpleJsonInstance : public ::System::Object {
public:
// Declarations
using PlayFabSimpleJsonCuztomization = ::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization;

/// @brief Field ApiSerializerStrategy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ApiSerializerStrategy, put=setStaticF_ApiSerializerStrategy)) ::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*  ApiSerializerStrategy;

/// @brief Convert operator to "::PlayFab::IPlayFabPlugin"
constexpr operator  ::PlayFab::IPlayFabPlugin*() noexcept;

/// @brief Convert operator to "::PlayFab::ISerializerPlugin"
constexpr operator  ::PlayFab::ISerializerPlugin*() noexcept;

/// @brief Method DeserializeObject, addr 0xa7def70, size 0xc4, virtual true, abstract: false, final true
inline ::System::Object* DeserializeObject(::StringW  json) ;

/// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline T DeserializeObject(::StringW  json) ;

/// @brief Method DeserializeObject, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
inline T DeserializeObject(::StringW  json, ::System::Object*  jsonSerializerStrategy) ;

static inline ::PlayFab::Json::SimpleJsonInstance* New_ctor() ;

/// @brief Method SerializeObject, addr 0xa7df1cc, size 0x8c, virtual true, abstract: false, final true
inline ::StringW SerializeObject(::System::Object*  json) ;

/// @brief Method SerializeObject, addr 0xa7df3d0, size 0xa4, virtual true, abstract: false, final true
inline ::StringW SerializeObject(::System::Object*  json, ::System::Object*  jsonSerializerStrategy) ;

/// @brief Method .ctor, addr 0xa7df474, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization* getStaticF_ApiSerializerStrategy() ;

/// @brief Convert to "::PlayFab::IPlayFabPlugin"
constexpr ::PlayFab::IPlayFabPlugin* i___PlayFab__IPlayFabPlugin() noexcept;

/// @brief Convert to "::PlayFab::ISerializerPlugin"
constexpr ::PlayFab::ISerializerPlugin* i___PlayFab__ISerializerPlugin() noexcept;

static inline void setStaticF_ApiSerializerStrategy(::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleJsonInstance() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleJsonInstance", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleJsonInstance(SimpleJsonInstance && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleJsonInstance", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleJsonInstance(SimpleJsonInstance const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19537};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::Json::SimpleJsonInstance) == 0x10, "Size mismatch!");

} // namespace end def PlayFab::Json
// Dependencies PlayFab.Json.PocoJsonSerializerStrategy
namespace PlayFab::Json {
// Is value type: false
// CS Name: PlayFab.Json.SimpleJsonInstance/PlayFabSimpleJsonCuztomization
class CORDL_TYPE SimpleJsonInstance_PlayFabSimpleJsonCuztomization : public ::PlayFab::Json::PocoJsonSerializerStrategy {
public:
// Declarations
/// @brief Method DeserializeObject, addr 0xa7df54c, size 0x44c, virtual true, abstract: false, final false
inline ::System::Object* DeserializeObject(::System::Object*  value, ::System::Type*  type) ;

static inline ::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization* New_ctor() ;

/// @brief Method TrySerializeKnownTypes, addr 0xa7df998, size 0x2c0, virtual true, abstract: false, final false
inline bool TrySerializeKnownTypes(::System::Object*  input, ::by_ref<::System::Object*>  output) ;

/// @brief Method .ctor, addr 0xa7df4f4, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimpleJsonInstance_PlayFabSimpleJsonCuztomization() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimpleJsonInstance_PlayFabSimpleJsonCuztomization", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimpleJsonInstance_PlayFabSimpleJsonCuztomization(SimpleJsonInstance_PlayFabSimpleJsonCuztomization && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimpleJsonInstance_PlayFabSimpleJsonCuztomization", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimpleJsonInstance_PlayFabSimpleJsonCuztomization(SimpleJsonInstance_PlayFabSimpleJsonCuztomization const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19536};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::Json
