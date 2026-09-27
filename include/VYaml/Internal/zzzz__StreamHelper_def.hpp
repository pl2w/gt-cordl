#pragma once
// IWYU pragma private; include "VYaml/Internal/StreamHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StreamHelper)
namespace GlobalNamespace {
struct StreamHelper__ReadAsSequenceAsync_d__0;
}
namespace System::IO {
class Stream;
}
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace VYaml::Internal {
class ReusableByteSequenceBuilder;
}
// Forward declare root types
namespace VYaml::Internal {
class StreamHelper;
}
// Write type traits
MARK_REF_T(::VYaml::Internal::StreamHelper*);
DEFINE_IL2CPP_CLASS(::VYaml::Internal::StreamHelper*, "VYaml.Internal", "StreamHelper");
// Dependencies System.Object
namespace VYaml::Internal {
// Is value type: false
// CS Name: VYaml.Internal.StreamHelper
class CORDL_TYPE StreamHelper : public ::System::Object {
public:
// Declarations
using _ReadAsSequenceAsync_d__0 = ::GlobalNamespace::StreamHelper__ReadAsSequenceAsync_d__0;

/// @brief Method NewArrayCapacity, addr 0xb96ab50, size 0x18, virtual false, abstract: false, final false
static inline int32_t NewArrayCapacity(int32_t  size) ;

/// [NullableContext(1)]
/// [AsyncStateMachine(typeof(VYaml.Internal.StreamHelper::<ReadAsSequenceAsync>d__0))]
/// @brief Method ReadAsSequenceAsync, addr 0xb96a9d8, size 0x178, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::ValueTask_1<::VYaml::Internal::ReusableByteSequenceBuilder*> ReadAsSequenceAsync(::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellation) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamHelper(StreamHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamHelper(StreamHelper const& ) = delete;

/// @brief Field ArrayMexLength offset 0xffffffff size 0x4
static constexpr int32_t  ArrayMexLength{static_cast<int32_t>(0x7fffffc7)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29036};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Internal::StreamHelper) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Internal
