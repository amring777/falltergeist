/*
 * Copyright 2012-2018 Falltergeist Developers.
 *
 * This file is part of Falltergeist.
 *
 * Falltergeist is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Falltergeist is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Falltergeist.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FALLTERGEIST_VM_HANDLER_OPCODE8032_H
#define FALLTERGEIST_VM_HANDLER_OPCODE8032_H

// C++ standard includes

// Falltergeist includes
#include "../../VM/IFalloutOpcode.h"

// Third party includes

namespace Falltergeist {
    namespace VM {
        namespace Handler {

            class Opcode8032 : virtual public IFalloutOpcode {
            public:
                Opcode8032() = default;

                void applyTo(std::shared_ptr<IFalloutContext> context) override;

                int number() override;

                std::string name() override;

                std::string notes() override;
            };
        }
    }
}
#endif // FALLTERGEIST_VM_HANDLER_OPCODE8032_H