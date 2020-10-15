#ifndef PAPER_H
#define PAPER_H

/**
 * @brief This class represents Paper entity.
 *
 */
class Paper
{
public:

    static Paper* create_paper(bool);

    /**
     * @brief Get the is admin object
     *
     * @return true
     * @return false
     */
    virtual bool get_is_admin() = 0;

    /**
     * @brief Set the is admin object
     *
     */
    virtual void set_is_admin(bool) = 0;

    /**
     * @brief Destroy the Paper object
     *
     */
    virtual ~Paper(){}
};


#endif // PAPER_H

