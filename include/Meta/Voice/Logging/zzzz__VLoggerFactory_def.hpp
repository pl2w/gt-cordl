#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/VLoggerFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VLoggerFactory)
namespace Meta::Voice::Logging {
class ILogSink;
}
namespace Meta::Voice::Logging {
class IVLoggerFactory;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
// Forward declare root types
namespace Meta::Voice::Logging {
class VLoggerFactory;
}
// Write type traits
MARK_REF_T(::Meta::Voice::Logging::VLoggerFactory*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::Logging::VLoggerFactory*, "Meta.Voice.Logging", "VLoggerFactory");
// Dependencies System.Object
namespace Meta::Voice::Logging {
// Is value type: false
// CS Name: Meta.Voice.Logging.VLoggerFactory
class CORDL_TYPE VLoggerFactory : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::Meta::Voice::Logging::IVLoggerFactory"
constexpr operator  ::Meta::Voice::Logging::IVLoggerFactory*() noexcept;

/// @brief Method GetLogger, addr 0x9e3bf04, size 0x68, virtual true, abstract: false, final true
inline ::Meta::Voice::Logging::IVLogger* GetLogger(::StringW  category, ::Meta::Voice::Logging::ILogSink*  logSink) ;

static inline ::Meta::Voice::Logging::VLoggerFactory* New_ctor() ;

/// @brief Method .ctor, addr 0x9e375c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Meta::Voice::Logging::IVLoggerFactory"
constexpr ::Meta::Voice::Logging::IVLoggerFactory* i___Meta__Voice__Logging__IVLoggerFactory() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VLoggerFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VLoggerFactory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VLoggerFactory(VLoggerFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VLoggerFactory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VLoggerFactory(VLoggerFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30973};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::Logging::VLoggerFactory) == 0x10, "Size mismatch!");

} // namespace end def Meta::Voice::Logging
