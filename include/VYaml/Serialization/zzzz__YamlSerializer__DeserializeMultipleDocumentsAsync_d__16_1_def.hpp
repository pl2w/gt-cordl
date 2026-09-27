#pragma once
// IWYU pragma private; include "VYaml/Serialization/YamlSerializer__DeserializeMultipleDocumentsAsync_d__16_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(YamlSerializer__DeserializeMultipleDocumentsAsync_d__16_1)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace VYaml::Internal {
class ReusableByteSequenceBuilder;
}
namespace VYaml::Serialization {
class YamlSerializerOptions;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct YamlSerializer__DeserializeMultipleDocumentsAsync_d__16_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::YamlSerializer__DeserializeMultipleDocumentsAsync_d__16_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::YamlSerializer__DeserializeMultipleDocumentsAsync_d__16_1, "VYaml.Serialization", "YamlSerializer/<DeserializeMultipleDocumentsAsync>d__16`1");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ValueTaskAwaiter`1<TResult>
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: VYaml.Serialization.YamlSerializer/<DeserializeMultipleDocumentsAsync>d__16`1<T>
struct CORDL_TYPE YamlSerializer__DeserializeMultipleDocumentsAsync_d__16_1 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(/* [Nullable(0)] */ ::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr YamlSerializer__DeserializeMultipleDocumentsAsync_d__16_1() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<::System::Collections::Generic::IEnumerable_1<T>*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "options", ty: "::VYaml::Serialization::YamlSerializerOptions*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter_1<::VYaml::Internal::ReusableByteSequenceBuilder*>", modifiers: "", def_value: None, comment: None }]
constexpr YamlSerializer__DeserializeMultipleDocumentsAsync_d__16_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<::System::Collections::Generic::IEnumerable_1<T>*>  __t__builder, ::System::IO::Stream*  stream, ::VYaml::Serialization::YamlSerializerOptions*  options, ::System::Runtime::CompilerServices::ValueTaskAwaiter_1<::VYaml::Internal::ReusableByteSequenceBuilder*>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29006};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// [Nullable(0)]
/// @brief Field <>t__builder, offset: 0x8, size: 0x28, def value: None
 ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<::System::Collections::Generic::IEnumerable_1<T>*>  __t__builder;

/// [Nullable(0)]
/// @brief Field stream, offset: 0x30, size: 0x8, def value: None
 ::System::IO::Stream*  stream;

/// [Nullable(0)]
/// @brief Field options, offset: 0x38, size: 0x8, def value: None
 ::VYaml::Serialization::YamlSerializerOptions*  options;

/// [Nullable(new[] { 0, 1 })]
/// @brief Field <>u__1, offset: 0x40, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::ValueTaskAwaiter_1<::VYaml::Internal::ReusableByteSequenceBuilder*>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
