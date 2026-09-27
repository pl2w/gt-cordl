#pragma once
// IWYU pragma private; include "VYaml/Internal/ReusableByteSequenceBuilderPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReusableByteSequenceBuilderPool)
namespace System::Collections::Concurrent {
template<typename T>
class ConcurrentQueue_1;
}
namespace VYaml::Internal {
class ReusableByteSequenceBuilder;
}
// Forward declare root types
namespace VYaml::Internal {
class ReusableByteSequenceBuilderPool;
}
// Write type traits
MARK_REF_T(::VYaml::Internal::ReusableByteSequenceBuilderPool*);
DEFINE_IL2CPP_CLASS(::VYaml::Internal::ReusableByteSequenceBuilderPool*, "VYaml.Internal", "ReusableByteSequenceBuilderPool");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace VYaml::Internal {
// Is value type: false
// CS Name: VYaml.Internal.ReusableByteSequenceBuilderPool
class CORDL_TYPE ReusableByteSequenceBuilderPool : public ::System::Object {
public:
// Declarations
/// @brief Field queue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_queue, put=setStaticF_queue)) ::System::Collections::Concurrent::ConcurrentQueue_1<::VYaml::Internal::ReusableByteSequenceBuilder*>*  queue;

/// @brief Method Rent, addr 0xb9679d0, size 0xbc, virtual false, abstract: false, final false
static inline ::VYaml::Internal::ReusableByteSequenceBuilder* Rent() ;

/// @brief Method Return, addr 0xb967a8c, size 0x90, virtual false, abstract: false, final false
static inline void Return(::VYaml::Internal::ReusableByteSequenceBuilder*  builder) ;

static inline ::System::Collections::Concurrent::ConcurrentQueue_1<::VYaml::Internal::ReusableByteSequenceBuilder*>* getStaticF_queue() ;

static inline void setStaticF_queue(::System::Collections::Concurrent::ConcurrentQueue_1<::VYaml::Internal::ReusableByteSequenceBuilder*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReusableByteSequenceBuilderPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReusableByteSequenceBuilderPool", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReusableByteSequenceBuilderPool(ReusableByteSequenceBuilderPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReusableByteSequenceBuilderPool", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReusableByteSequenceBuilderPool(ReusableByteSequenceBuilderPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29032};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::VYaml::Internal::ReusableByteSequenceBuilderPool) == 0x10, "Size mismatch!");

} // namespace end def VYaml::Internal
