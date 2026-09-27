#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/Console.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__Console_def.hpp"
#include "UnityEngine/zzzz__Logger_def.hpp"
inline void Technie::PhysicsCreator::Console::setStaticF_Technie(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "Technie", ::Technie::PhysicsCreator::Console*>(std::forward<::StringW>(value));
}
inline ::StringW Technie::PhysicsCreator::Console::getStaticF_Technie()  {
return ::cordl_internals::getStaticField<::StringW, "Technie", ::Technie::PhysicsCreator::Console*>();
}
inline void Technie::PhysicsCreator::Console::setStaticF_output(::UnityEngine::Logger*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Logger*, "output", ::Technie::PhysicsCreator::Console*>(std::forward<::UnityEngine::Logger*>(value));
}
inline ::UnityEngine::Logger* Technie::PhysicsCreator::Console::getStaticF_output()  {
return ::cordl_internals::getStaticField<::UnityEngine::Logger*, "output", ::Technie::PhysicsCreator::Console*>();
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::Console::Console()   {
}
